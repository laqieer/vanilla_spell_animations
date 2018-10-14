/*
 * spell_animation_table.c
 *
 *  Created on: 2018年10月13日
 *      Author: Destiny
 */

#include "spell_animation_table.h"

const int spellAnimationTable[] = {
		playSpellAnimationNothing, //0x00
		playSpellAnimationHandAxe, //0x01
		playSpellAnimationArrow, //0x02
		playSpellAnimationJavelin1, //0x03
		playSpellAnimationJavelin2, //0x04
		playSpellAnimationJavelin3, //0x05
		playSpellAnimationJavelin4, //0x06
		playSpellAnimationJavelin5, //0x07
		playSpellAnimationJavelin6, //0x08
		playSpellAnimationJavelin7, //0x09
		playSpellAnimationJavelin8, //0x0A
		playSpellAnimationJavelin9, //0x0B
		playSpellAnimationJavelin10, //0x0C
		playSpellAnimationJavelin11, //0x0D
		playSpellAnimationSong, //0x0E
		playSpellAnimationDance, //0x0F
		playSpellAnimationBallista, //0x10
		playSpellAnimationExaccusWave, //0x11
		playSpellAnimationSwordOfSealsFire, //0x12
		playSpellAnimationFlametongue, //0x13
		playSpellAnimationFaHolyDragonStone, //0x14
		playSpellAnimationIodunDarkDragonStone, //0x15
		playSpellAnimationFire, //0x16
		playSpellAnimationElfire, //0x17
		playSpellAnimationForblaze, //0x18
		playSpellAnimationThunder, //0x19
		playSpellAnimationBolting, //0x1A
		playSpellAnimationFimbulvetr, //0x1B
		playSpellAnimationAircalibur, //0x1C
		playSpellAnimationFlux, //0x1D
		playSpellAnimationNosferatu, //0x1E
		playSpellAnimationLightning, //0x1F
		playSpellAnimationPurge, //0x20
		playSpellAnimationAureola, //0x21
		playSpellAnimationDivine, //0x22
		playSpellAnimationApocalypse, //0x23
		playSpellAnimationEclipse, //0x24
		playSpellAnimationFenrir, //0x25
		playSpellAnimationHeal, //0x26
		playSpellAnimationMend, //0x27
		playSpellAnimationRecover, //0x28
		playSpellAnimationPhysic, //0x29
		playSpellAnimationFortify, //0x2A
		playSpellAnimationLatona, //0x2B
		playSpellAnimationRestore, //0x2C
		playSpellAnimationSilence, //0x2D
		playSpellAnimationSleep, //0x2E
		playSpellAnimationHammerne, //0x2F
		playSpellAnimationBeserk, //0x30
		playSpellAnimationBarrier, //0x31
		playSpellAnimationPromote, //0x32
		playSpellAnimationShine, //0x33
		playSpellAnimationLuna, //0x34
		playSpellAnimationExcalibur, //0x35
		playSpellAnimationGespenst, //0x36
		playSpellAnimationAura, //0x37
		playSpellAnimationLuce, //0x38
		playSpellAnimationErishkigal, //0x39
		playSpellAnimationFillaMight, //0x3A
		playSpellAnimationThorIre, //0x3B
		playSpellAnimationNiniGrace, //0x3C
		playSpellAnimationSetLitany, //0x3D
		playSpellAnimationStone, //0x3E
		playSpellAnimationIvaldi, //0x3F
		playSpellAnimationDemonLight, //0x40
		playSpellAnimationGleipnir, //0x41
		playSpellAnimationCrimsonEye, //0x42
		playSpellAnimationEvilEye, //0x43
		playSpellAnimationShadowshot, //0x44
		playSpellAnimationDemonSurge, //0x45
		playSpellAnimationNaglfar, //0x46
		playSpellAnimationWretchedBreath, //0x47
		endSpellAnimationTable
};

__attribute__((section(".spellAnimationTableAddr")))
const int * const spellAnimationTableAddr = spellAnimationTable;
