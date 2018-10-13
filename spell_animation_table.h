/*
 * spell_aniamtion_table.h
 *
 *  Created on: 2018年10月13日
 *      Author: Destiny
 */

#ifndef SPELL_ANIMATION_TABLE_H_
#define SPELL_ANIMATION_TABLE_H_

#include "type.h"

typedef enum SpellAnimationID
{
	spellAnimationID_Nothing = 0,
	spellAnimationID_HandAxe,
	spellAnimationID_Arrow,
	spellAnimationID_Javelin1,
	spellAnimationID_Javelin2,
	spellAnimationID_Javelin3,
	spellAnimationID_Javelin4,
	spellAnimationID_Javelin5,
	spellAnimationID_Javelin6,
	spellAnimationID_Javelin7,
	spellAnimationID_Javelin8,
	spellAnimationID_Javelin9,
	spellAnimationID_Javelin10,
	spellAnimationID_Javelin11,
	spellAnimationID_Song,
	spellAnimationID_Dance,
	spellAnimationID_Ballista,
	spellAnimationID_ExaccusWave,
	spellAnimationID_SwordOfSealsFire,
	spellAnimationID_Flametongue,
	spellAnimationID_FaHolyDragonStone,
	spellAnimationID_IodunDarkDragonStone,
	spellAnimationID_Fire,
	spellAnimationID_Elfire,
	spellAnimationID_Forblaze,
	spellAnimationID_Thunder,
	spellAnimationID_Bolting,
	spellAnimationID_Fimbulvetr,
	spellAnimationID_Aircalibur,
	spellAnimationID_Flux,
	spellAnimationID_Nosferatu,
	spellAnimationID_Lightning,
	spellAnimationID_Purge,
	spellAnimationID_Aureola,
	spellAnimationID_Divine,
	spellAnimationID_Apocalypse,
	spellAnimationID_Eclipse,
	spellAnimationID_Fenrir,
	spellAnimationID_Heal,
	spellAnimationID_Mend,
	spellAnimationID_Recover,
	spellAnimationID_Physic,
	spellAnimationID_Fortify,
	spellAnimationID_Latona,
	spellAnimationID_Restore,
	spellAnimationID_Silence,
	spellAnimationID_Sleep,
	spellAnimationID_Hammerne,
	spellAnimationID_Beserk,
	spellAnimationID_Barrier,
	spellAnimationID_Promote,
	spellAnimationID_Shine,
	spellAnimationID_Luna,
	spellAnimationID_Excalibur,
	spellAnimationID_Gespenst,
	spellAnimationID_Aura,
	spellAnimationID_Luce,
	spellAnimationID_Erishkigal,
	spellAnimationID_FillaMight,
	spellAnimationID_ThorIre,
	spellAnimationID_NiniGrace,
	spellAnimationID_SetLitany,
	spellAnimationID_Stone,
	spellAnimationID_Ivaldi,
	spellAnimationID_DemonLight,
	spellAnimationID_Gleipnir,
	spellAnimationID_CrimsonEye,
	spellAnimationID_EvilEye,
	spellAnimationID_Shadowshot,
	spellAnimationID_DemonSurge,
	spellAnimationID_Naglfar,
	spellAnimationID_WretchedBreath
} SpellAnimationID;

#define playSpellAnimationNothing 0x0805BE91
#define playSpellAnimationHandAxe 0x0805BF09
#define playSpellAnimationArrow 0x0805C265
#define playSpellAnimationJavelin1 0x0805C3F1
#define playSpellAnimationJavelin2 0x0805C44D
#define playSpellAnimationJavelin3 0x0805C4A9
#define playSpellAnimationJavelin4 0x0805C505
#define playSpellAnimationJavelin5 0x0805C561
#define playSpellAnimationJavelin6 0x0805C5BD
#define playSpellAnimationJavelin7 0x0805C619
#define playSpellAnimationJavelin8 0x0805C675
#define playSpellAnimationJavelin9 0x0805C6D1
#define playSpellAnimationJavelin10 0x0805C72D
#define playSpellAnimationJavelin11 0x0805C789
#define playSpellAnimationSong 0x0805C935
#define playSpellAnimationDance 0x0805CBDD
#define playSpellAnimationBallista 0x0805CD0D
#define playSpellAnimationExaccusWave 0x0805CEC5
#define playSpellAnimationSwordOfSealsFire 0x0805CEC9
#define playSpellAnimationFlametongue 0x0805D065
#define playSpellAnimationFaHolyDragonStone 0x0805D389
#define playSpellAnimationIodunDarkDragonStone 0x0805D4D1
#define playSpellAnimationFire 0x0805DAD5
#define playSpellAnimationElfire 0x0805DB19
#define playSpellAnimationForblaze 0x0805FE81
#define playSpellAnimationThunder 0x0805D7D9
#define playSpellAnimationBolting 0x0805E755
#define playSpellAnimationFimbulvetr 0x0805E0E5
#define playSpellAnimationAircalibur 0x0805EB99
#define playSpellAnimationFlux 0x0805EED9
#define playSpellAnimationNosferatu 0x0805F355
#define playSpellAnimationLightning 0x0805F8B5
#define playSpellAnimationPurge 0x0805FAE1
#define playSpellAnimationAureola 0x08060285
#define playSpellAnimationDivine 0x0805FE85
#define playSpellAnimationApocalypse 0x08060289
#define playSpellAnimationEclipse 0x0806028D
#define playSpellAnimationFenrir 0x080608A5
#define playSpellAnimationHeal 0x08061025
#define playSpellAnimationMend 0x08061159
#define playSpellAnimationRecover 0x080612BD
#define playSpellAnimationPhysic 0x08061421
#define playSpellAnimationFortify 0x08061C19
#define playSpellAnimationLatona 0x08061C49
#define playSpellAnimationRestore 0x080620ED
#define playSpellAnimationSilence 0x080623E1
#define playSpellAnimationSleep 0x08062679
#define playSpellAnimationHammerne 0x08062999
#define playSpellAnimationBeserk 0x08062C15
#define playSpellAnimationBarrier 0x08063215
#define playSpellAnimationPromote nullptr
#define playSpellAnimationShine 0x08063481
#define playSpellAnimationLuna 0x08063975
#define playSpellAnimationExcalibur 0x08064309
#define playSpellAnimationGespenst 0x08064CFD
#define playSpellAnimationAura 0x08064E75
#define playSpellAnimationLuce 0x08065491
#define playSpellAnimationErishkigal 0x08065495
#define playSpellAnimationFillaMight 0x08065635
#define playSpellAnimationThorIre 0x08065671
#define playSpellAnimationNiniGrace 0x080656AD
#define playSpellAnimationSetLitany 0x080656E9
#define playSpellAnimationStone 0x080674D5
#define playSpellAnimationIvaldi 0x080657D5
#define playSpellAnimationDemonLight 0x08066515
#define playSpellAnimationGleipnir 0x08068B81
#define playSpellAnimationCrimsonEye 0x08069EC5
#define playSpellAnimationEvilEye 0x08067799
#define playSpellAnimationShadowshot 0x0806AEF5
#define playSpellAnimationDemonSurge 0x0806B4F9
#define playSpellAnimationNaglfar 0x08067B7D
#define playSpellAnimationWretchedBreath 0x080687E5
#define endSpellAnimationTable nullptr

#endif /* SPELL_ANIMATION_TABLE_H_ */
