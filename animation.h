/*
 * animation.h
 *
 *  Created on: 2018年10月14日
 *      Author: Destiny
 */

#ifndef ANIMATION_H_
#define ANIMATION_H_

#include "type.h"

// Animation Interpreter Struct (AIS)
typedef struct AnimationInterpreter {
	u16 bitfield_0;	// Some bitfield
				// AND 0x02: True when cape flowing? Acts as though AND 0x01 is false?
				// AND 0x01: True to display sprites/continue animation
	s16 PositionX;	// x screen position
	s16 PositionY;	// y screen position
	u16 delayTimer;	// delay countdown
	u16 OBJAttr2Base;	// OBJ Attribute 2 base value
						// Halfword of basis for part 2 of 0-2 of OAM data (which selects which tile is the top left corner)
						// 0x9B00 for right unit (name = 0x300; tile 768 where the sheet is loaded to)
	u16 depth;			// AIS depth (opposite of priority: the higher the depth, the later the AIS will be in the linked list)
	u16 bitfield_C;			// Some bitfield
						// +0x0200 | Left Unit AIS
						// Last nibble has special meaning:
						// 0x00 = No Command
	u16 unk_E;
	u16 unk_10;
	u8 modeX;
	u8 frameID;	// current frame index
	u8 C85IDBufferIndex;
	u8 C85IDBuffer[11];
	u32 *nextCmd;	// current frame pointer
	u32	*startCmd;		// start frame pointer
	void *sheet;	// sheet data in ROM
	void *sheetBuffer;	// sheet data in RAM
	void *OAMInfoBuffer;	// OAM start pointer
	struct AnimationInterpreter *previous;	// Previous AIS (drawn before this one)
	struct AnimationInterpreter *next;	// Next AIS (drawn after this one)
	void *currentOAMInfo;	// OAM pointer
	u32 unk_40;
	u32 unk_44;
} AnimationInterpreter;

// spell animation functions

#define	beginSpellAnimation			((int(*)())0x8055161)	// SetSomethingSpellFxToTrue
#define	beginCasting				((void(*)())0x8054FA9)	// NewEfxSpellCast
#define	resetBG1					((void(*)())0x8055179)	// ClearBG1Setup
#define	GetSomeAISRelatedIndexMaybe	((int(*)(AnimationInterpreter*))0x805A311)
#define	GetSomeBoolean				((int(*)(int))0x805A185)
#define	endSpellAnimation			((int(*)())0x805516D)	// SetSomethingSpellFxToFalse
#define	endCasting					((void(*)())0x8055001)	// StartEndEfxSpellCast
#define	getTargetAIS				((AnimationInterpreter*(*)(AnimationInterpreter *))0x805A2B5)	// GetCoreAIStruct
#define	getAnimationStartFrame		((int(*)())0x805598D)	// GetAnimationStartFrameMaybe
#define scrollScreen				((void(*)(AnimationInterpreter*, short))0x80533D1)	// MoveBattleCameraOnto
#define	playHitSound				((void(*)(AnimationInterpreter*))0x8072451)
#define	reduceHPBar					((void(*)(AnimationInterpreter*,int))0x8055279)	// ThisMakesTheHPInSpellAnimGoAway
#define	playSound					((void(*)(int, int, int, int))0x80729A5)

#endif /* ANIMATION_H_ */
