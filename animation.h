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

#ifdef __CDT_PARSER__
#define FE8U
#endif

#ifdef FE6

#define	beginSpellAnimation			((int(*)())0x80474B1)	// SetSomethingSpellFxToTrue
#define	beginCasting				((void(*)())0x8047301)	// NewEfxSpellCast
#define	resetBG1					((void(*)())0x80474C9)	// ClearBG1Setup
#define	GetSomeAISRelatedIndexMaybe	((int(*)(AnimationInterpreter*))0x804B869)
#define	GetSomeBoolean				((int(*)(int))0x804B6D9)
#define	endSpellAnimation			((int(*)())0x80474BD)	// SetSomethingSpellFxToFalse
#define	endCasting					((void(*)())0x8047359)	// StartEndEfxSpellCast
#define	getTargetAIS				((AnimationInterpreter*(*)(AnimationInterpreter *))0x804B80D)	// GetCoreAIStruct
#define	getAnimationStartFrame		((int(*)())0x8047C29)	// GetAnimationStartFrameMaybe
#define scrollScreen				((void(*)(AnimationInterpreter*, short))0x8045C91)	// MoveBattleCameraOnto
#define	playHitSound				((void(*)(AnimationInterpreter*))0x805C359)
#define	reduceHPBar					((void(*)(AnimationInterpreter*,int))0x8047601)	// ThisMakesTheHPInSpellAnimGoAway
#define	playSound					((void(*)(int, int, int, int))0x805C805)

#endif

#ifdef FE7J

#define	beginSpellAnimation			((int(*)())0x80507CD)	// SetSomethingSpellFxToTrue
#define	beginCasting				((void(*)())0x8050349)	// NewEfxSpellCast
#define	resetBG1					((void(*)())0x80507E5)	// ClearBG1Setup
#define	GetSomeAISRelatedIndexMaybe	((int(*)(AnimationInterpreter*))0x8054FED)
#define	GetSomeBoolean				((int(*)(int))0x8054E75)
#define	endSpellAnimation			((int(*)())0x8053C11)	// SetSomethingSpellFxToFalse
#define	endCasting					((void(*)())0x80503A1)	// StartEndEfxSpellCast
#define	getTargetAIS				((AnimationInterpreter*(*)(AnimationInterpreter *))0x8054F91)	// GetCoreAIStruct
#define	getAnimationStartFrame		((int(*)())0x8050F55)	// GetAnimationStartFrameMaybe
#define scrollScreen				((void(*)(AnimationInterpreter*, short))0x804EC75)	// MoveBattleCameraOnto
#define	playHitSound				((void(*)(AnimationInterpreter*))0x8068501)
#define	reduceHPBar					((void(*)(AnimationInterpreter*,int))0x805091D)	// ThisMakesTheHPInSpellAnimGoAway
#define	playSound					((void(*)(int, int, int, int))0x80689D1)

#endif

#ifdef FE7U

#define	beginSpellAnimation			((int(*)())0x804FFF1)	// SetSomethingSpellFxToTrue
#define	beginCasting				((void(*)())0x804FB6D)	// NewEfxSpellCast
#define	resetBG1					((void(*)())0x8050009)	// ClearBG1Setup
#define	GetSomeAISRelatedIndexMaybe	((int(*)(AnimationInterpreter*))0x8054805)
#define	GetSomeBoolean				((int(*)(int))0x805468D)
#define	endSpellAnimation			((int(*)())0x8053429)	// SetSomethingSpellFxToFalse
#define	endCasting					((void(*)())0x804FBC5)	// StartEndEfxSpellCast
#define	getTargetAIS				((AnimationInterpreter*(*)(AnimationInterpreter *))0x80547A9)	// GetCoreAIStruct
#define	getAnimationStartFrame		((int(*)())0x8050779)	// GetAnimationStartFrameMaybe
#define scrollScreen				((void(*)(AnimationInterpreter*, short))0x804E499)	// MoveBattleCameraOnto
#define	playHitSound				((void(*)(AnimationInterpreter*))0x8067D15)
#define	reduceHPBar					((void(*)(AnimationInterpreter*,int))0x8050141)	// ThisMakesTheHPInSpellAnimGoAway
#define	playSound					((void(*)(int, int, int, int))0x80681E5)

#endif

#ifdef FE8J

#define	beginSpellAnimation			((int(*)())0x8056109)	// SetSomethingSpellFxToTrue
#define	beginCasting				((void(*)())0x8055C79)	// NewEfxSpellCast
#define	resetBG1					((void(*)())0x8056121)	// ClearBG1Setup
#define	GetSomeAISRelatedIndexMaybe	((int(*)(AnimationInterpreter*))0x805B0B5)
#define	GetSomeBoolean				((int(*)(int))0x805AF29)
#define	endSpellAnimation			((int(*)())0x8056115)	// SetSomethingSpellFxToFalse
#define	endCasting					((void(*)())0x8055E81)	// StartEndEfxSpellCast
#define	getTargetAIS				((AnimationInterpreter*(*)(AnimationInterpreter *))0x805B059)	// GetCoreAIStruct
#define	getAnimationStartFrame		((int(*)())0x8056921)	// GetAnimationStartFrameMaybe
#define scrollScreen				((void(*)(AnimationInterpreter*, short))0x80540C1)	// MoveBattleCameraOnto
#define	playHitSound				((void(*)(AnimationInterpreter*))0x8074935)
#define	reduceHPBar					((void(*)(AnimationInterpreter*,int))0x8056221)	// ThisMakesTheHPInSpellAnimGoAway
#define	playSound					((void(*)(int, int, int, int))0x8074E81)

#endif

#ifdef FE8U

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

#endif

#endif /* ANIMATION_H_ */
