/*
 * spell_aniamtion_table.h
 *
 *  Created on: 2018年10月13日
 *      Author: Destiny
 */

#ifndef SPELL_ANIMATION_TABLE_H_
#define SPELL_ANIMATION_TABLE_H_

#include "animation.h"

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

#ifdef __CDT_PARSER__
#define FE8U
#endif

#ifdef FE6

#define	playSpellAnimationNothing	0x804D25D
#define	playSpellAnimationHandAxe	0x804D2D5
#define	playSpellAnimationArrow	0x804D62D
#define	playSpellAnimationJavelin1	0x804D7C1
#define	playSpellAnimationJavelin2	0x804D81D
#define	playSpellAnimationJavelin3	0x804D879
#define	playSpellAnimationJavelin4	0x804D8D5
#define	playSpellAnimationJavelin5	0x804D931
#define	playSpellAnimationJavelin6	0x804D98D
#define	playSpellAnimationJavelin7	0x804D9E9
#define	playSpellAnimationJavelin8	0x804DA45
#define	playSpellAnimationJavelin9	0x804DAA1
#define	playSpellAnimationJavelin10	nullptr
#define	playSpellAnimationJavelin11	nullptr
#define	playSpellAnimationSong	0x804DC55
#define	playSpellAnimationDance	0x804DE4D
#define	playSpellAnimationBallista	0x804DF31
#define	playSpellAnimationExaccusWave	0x804E0E9
#define	playSpellAnimationSwordOfSealsFire	0x804E449
#define	playSpellAnimationFlametongue	0x804E5E5
#define	playSpellAnimationFaHolyDragonStone	0x804E8CD
#define	playSpellAnimationIodunDarkDragonStone	0x804EA15
#define	playSpellAnimationFire	0x804EFB5
#define	playSpellAnimationElfire	0x804EFF9
#define	playSpellAnimationForblaze	0x80513AD
#define	playSpellAnimationThunder	0x804ECB9
#define	playSpellAnimationBolting	0x804FC29
#define	playSpellAnimationFimbulvetr	0x804F5C5
#define	playSpellAnimationAircalibur	0x805007D
#define	playSpellAnimationFlux	0x80503BD
#define	playSpellAnimationNosferatu	0x8050861
#define	playSpellAnimationLightning	0x8050DE1
#define	playSpellAnimationPurge	0x805100D
#define	playSpellAnimationAureola	0x8052091
#define	playSpellAnimationDivine	0x8051CD1
#define	playSpellAnimationApocalypse	0x80529ED
#define	playSpellAnimationEclipse	0x8053765
#define	playSpellAnimationFenrir	0x8053DC9
#define	playSpellAnimationHeal	0x8054559
#define	playSpellAnimationMend	0x80546A9
#define	playSpellAnimationRecover	0x8054849
#define	playSpellAnimationPhysic	0x80549E9
#define	playSpellAnimationFortify	0x8055235
#define	playSpellAnimationLatona	0x8055265
#define	playSpellAnimationRestore	0x80556BD
#define	playSpellAnimationSilence	0x805595D
#define	playSpellAnimationSleep	0x8055BF5
#define	playSpellAnimationHammerne	0x8055F25
#define	playSpellAnimationBeserk	0x80561A1
#define	playSpellAnimationBarrier	0x80567AD
#define	playSpellAnimationPromote	nullptr
#define	playSpellAnimationShine	nullptr
#define	playSpellAnimationLuna	nullptr
#define	playSpellAnimationExcalibur	nullptr
#define	playSpellAnimationGespenst	nullptr
#define	playSpellAnimationAura	nullptr
#define	playSpellAnimationLuce	nullptr
#define	playSpellAnimationErishkigal	nullptr
#define	playSpellAnimationFillaMight	nullptr
#define	playSpellAnimationThorIre	nullptr
#define	playSpellAnimationNiniGrace	nullptr
#define	playSpellAnimationSetLitany	nullptr
#define	playSpellAnimationStone	nullptr
#define	playSpellAnimationIvaldi	nullptr
#define	playSpellAnimationDemonLight	nullptr
#define	playSpellAnimationGleipnir	nullptr
#define	playSpellAnimationCrimsonEye	nullptr
#define	playSpellAnimationEvilEye	nullptr
#define	playSpellAnimationShadowshot	nullptr
#define	playSpellAnimationDemonSurge	nullptr
#define	playSpellAnimationNaglfar	nullptr
#define	playSpellAnimationWretchedBreath	nullptr

#endif

#ifdef FE7J

#define	playSpellAnimationNothing	0x8056BC9
#define	playSpellAnimationHandAxe	0x8056C41
#define	playSpellAnimationArrow	0x8056F99
#define	playSpellAnimationJavelin1	0x8057121
#define	playSpellAnimationJavelin2	0x805717D
#define	playSpellAnimationJavelin3	0x80571D9
#define	playSpellAnimationJavelin4	0x8057235
#define	playSpellAnimationJavelin5	0x8057291
#define	playSpellAnimationJavelin6	0x80572ED
#define	playSpellAnimationJavelin7	0x8057349
#define	playSpellAnimationJavelin8	0x80573A5
#define	playSpellAnimationJavelin9	0x8057401
#define	playSpellAnimationJavelin10	0x805745D
#define	playSpellAnimationJavelin11	0x80574B9
#define	playSpellAnimationSong	0x8057665
#define	playSpellAnimationDance	0x8057925
#define	playSpellAnimationBallista	0x8057A6D
#define	playSpellAnimationExaccusWave	0x8057C25
#define	playSpellAnimationSwordOfSealsFire	0x8057F85
#define	playSpellAnimationFlametongue	0x8058121
#define	playSpellAnimationFaHolyDragonStone	0x805843D
#define	playSpellAnimationIodunDarkDragonStone	0x8058585
#define	playSpellAnimationFire	0x8058B29
#define	playSpellAnimationElfire	0x8058B6D
#define	playSpellAnimationForblaze	0x805ABD9
#define	playSpellAnimationThunder	0x805882D
#define	playSpellAnimationBolting	0x805979D
#define	playSpellAnimationFimbulvetr	0x8059139
#define	playSpellAnimationAircalibur	0x8059BF1
#define	playSpellAnimationFlux	0x8059BF5
#define	playSpellAnimationNosferatu	0x805A091
#define	playSpellAnimationLightning	0x805A60D
#define	playSpellAnimationPurge	0x805A839
#define	playSpellAnimationAureola	0x805BA79
#define	playSpellAnimationDivine	0x805B679
//#define	playSpellAnimationApocalypse	0x805C3D5
#define	playSpellAnimationEclipse	0x805C3D9
#define	playSpellAnimationFenrir	0x805CA39
#define	playSpellAnimationHeal	0x805D1D9
#define	playSpellAnimationMend	0x805D329
#define	playSpellAnimationRecover	0x805D4CD
#define	playSpellAnimationPhysic	0x805D671
#define	playSpellAnimationFortify	0x805DEC1
#define	playSpellAnimationLatona	0x805DEF1
#define	playSpellAnimationRestore	0x805E3B1
#define	playSpellAnimationSilence	0x805E651
#define	playSpellAnimationSleep	0x805E8E9
#define	playSpellAnimationHammerne	0x805EC09
#define	playSpellAnimationBeserk	0x805EE85
#define	playSpellAnimationBarrier	0x805F48D
#define	playSpellAnimationPromote	nullptr
#define	playSpellAnimationShine	0x805F6F9
#define	playSpellAnimationLuna	0x805FBE9
#define	playSpellAnimationExcalibur	0x80605A5
#define	playSpellAnimationGespenst	0x8060E71
#define	playSpellAnimationAura	0x80615C5
#define	playSpellAnimationLuce	0x8061BE1
#define	playSpellAnimationErishkigal	0x8062351
#define	playSpellAnimationFillaMight	0x8062AAD
#define	playSpellAnimationThorIre	0x8062AE9
#define	playSpellAnimationNiniGrace	0x8062B25
#define	playSpellAnimationSetLitany	0x8062B61
#define	playSpellAnimationStone	nullptr
#define	playSpellAnimationIvaldi	nullptr
#define	playSpellAnimationDemonLight	nullptr
#define	playSpellAnimationGleipnir	nullptr
#define	playSpellAnimationCrimsonEye	nullptr
#define	playSpellAnimationEvilEye	nullptr
#define	playSpellAnimationShadowshot	nullptr
#define	playSpellAnimationDemonSurge	nullptr
#define	playSpellAnimationNaglfar	nullptr
#define	playSpellAnimationWretchedBreath	nullptr

#endif

#ifdef FE7U

#define	playSpellAnimationNothing	0x80563E1
#define	playSpellAnimationHandAxe	0x8056459
#define	playSpellAnimationArrow	0x80567B1
#define	playSpellAnimationJavelin1	0x8056939
#define	playSpellAnimationJavelin2	0x8056995
#define	playSpellAnimationJavelin3	0x80569F1
#define	playSpellAnimationJavelin4	0x8056A4D
#define	playSpellAnimationJavelin5	0x8056AA9
#define	playSpellAnimationJavelin6	0x8056B05
#define	playSpellAnimationJavelin7	0x8056B61
#define	playSpellAnimationJavelin8	0x8056BBD
#define	playSpellAnimationJavelin9	0x8056C19
#define	playSpellAnimationJavelin10	0x8056C75
#define	playSpellAnimationJavelin11	0x8056CD1
#define	playSpellAnimationSong	0x8056E7D
#define	playSpellAnimationDance	0x805713D
#define	playSpellAnimationBallista	0x8057285
#define	playSpellAnimationExaccusWave	0x805743D
#define	playSpellAnimationSwordOfSealsFire	0x805779D
#define	playSpellAnimationFlametongue	0x8057939
#define	playSpellAnimationFaHolyDragonStone	0x8057C55
#define	playSpellAnimationIodunDarkDragonStone	0x8057D9D
#define	playSpellAnimationFire	0x8058341
#define	playSpellAnimationElfire	0x8058385
#define	playSpellAnimationForblaze	0x805A3F1
#define	playSpellAnimationThunder	0x8058045
#define	playSpellAnimationBolting	0x8058FB5
#define	playSpellAnimationFimbulvetr	0x8058951
#define	playSpellAnimationAircalibur	0x8059409
#define	playSpellAnimationFlux	0x805940D
#define	playSpellAnimationNosferatu	0x80598A9
#define	playSpellAnimationLightning	0x8059E25
#define	playSpellAnimationPurge	0x805A051
#define	playSpellAnimationAureola	0x805B291
#define	playSpellAnimationDivine	0x805AE91
//#define	playSpellAnimationApocalypse	0x805BBED
#define	playSpellAnimationEclipse	0x805BBF1
#define	playSpellAnimationFenrir	0x805C251
#define	playSpellAnimationHeal	0x805C9F1
#define	playSpellAnimationMend	0x805CB41
#define	playSpellAnimationRecover	0x805CCE5
#define	playSpellAnimationPhysic	0x805CE89
#define	playSpellAnimationFortify	0x805D6D9
#define	playSpellAnimationLatona	0x805D709
#define	playSpellAnimationRestore	0x805DBC9
#define	playSpellAnimationSilence	0x805DE69
#define	playSpellAnimationSleep	0x805E101
#define	playSpellAnimationHammerne	0x805E421
#define	playSpellAnimationBeserk	0x805E69D
#define	playSpellAnimationBarrier	0x805ECA5
#define	playSpellAnimationPromote	nullptr
#define	playSpellAnimationShine	0x805EF11
#define	playSpellAnimationLuna	0x805F401
#define	playSpellAnimationExcalibur	0x805FDBD
#define	playSpellAnimationGespenst	0x8060689
#define	playSpellAnimationAura	0x8060DDD
#define	playSpellAnimationLuce	0x80613F9
#define	playSpellAnimationErishkigal	0x8061B69
#define	playSpellAnimationFillaMight	0x80622C5
#define	playSpellAnimationThorIre	0x8062301
#define	playSpellAnimationNiniGrace	0x806233D
#define	playSpellAnimationSetLitany	0x8062379
#define	playSpellAnimationStone	nullptr
#define	playSpellAnimationIvaldi	nullptr
#define	playSpellAnimationDemonLight	nullptr
#define	playSpellAnimationGleipnir	nullptr
#define	playSpellAnimationCrimsonEye	nullptr
#define	playSpellAnimationEvilEye	nullptr
#define	playSpellAnimationShadowshot	nullptr
#define	playSpellAnimationDemonSurge	nullptr
#define	playSpellAnimationNaglfar	nullptr
#define	playSpellAnimationWretchedBreath	nullptr

#endif

#ifdef FE8J

#define	playSpellAnimationNothing	0x805CC2D
#define	playSpellAnimationHandAxe	0x805CCA5
#define	playSpellAnimationArrow	0x805D001
#define	playSpellAnimationJavelin1	0x805D18D
#define	playSpellAnimationJavelin2	0x805D1E9
#define	playSpellAnimationJavelin3	0x805D245
#define	playSpellAnimationJavelin4	0x805D2A1
#define	playSpellAnimationJavelin5	0x805D2FD
#define	playSpellAnimationJavelin6	0x805D359
#define	playSpellAnimationJavelin7	0x805D3B5
#define	playSpellAnimationJavelin8	0x805D411
#define	playSpellAnimationJavelin9	0x805D46D
#define	playSpellAnimationJavelin10	0x805D4C9
#define	playSpellAnimationJavelin11	0x805D525
#define	playSpellAnimationSong	0x805D6D1
#define	playSpellAnimationDance	0x805D979
#define	playSpellAnimationBallista	0x805DAA9
#define	playSpellAnimationExaccusWave	0x805DC61
#define	playSpellAnimationSwordOfSealsFire	0x805DFC9
#define	playSpellAnimationFlametongue	0x805E165
#define	playSpellAnimationFaHolyDragonStone	0x805E489
#define	playSpellAnimationIodunDarkDragonStone	0x805E5D1
#define	playSpellAnimationFire	0x805EBD5
#define	playSpellAnimationElfire	0x805EC19
#define	playSpellAnimationForblaze	0x8060F81
#define	playSpellAnimationThunder	0x805E8D9
#define	playSpellAnimationBolting	0x805F855
#define	playSpellAnimationFimbulvetr	0x805F1E5
#define	playSpellAnimationAircalibur	0x805FC99
#define	playSpellAnimationFlux	0x805FFD9
#define	playSpellAnimationNosferatu	0x8060455
#define	playSpellAnimationLightning	0x80609B5
#define	playSpellAnimationPurge	0x8060BE1
#define	playSpellAnimationAureola	0x8061385
#define	playSpellAnimationDivine	0x8060F85
//#define	playSpellAnimationApocalypse	0x8061389
#define	playSpellAnimationEclipse	0x806138D
#define	playSpellAnimationFenrir	0x80619A5
#define	playSpellAnimationHeal	0x8062125
#define	playSpellAnimationMend	0x8062259
#define	playSpellAnimationRecover	0x80623BD
#define	playSpellAnimationPhysic	0x8062521
#define	playSpellAnimationFortify	0x8062D19
#define	playSpellAnimationLatona	0x8062D49
#define	playSpellAnimationRestore	0x80631ED
#define	playSpellAnimationSilence	0x80634E1
#define	playSpellAnimationSleep	0x8063779
#define	playSpellAnimationHammerne	0x8063A99
#define	playSpellAnimationBeserk	0x8063D15
#define	playSpellAnimationBarrier	0x8064315
#define	playSpellAnimationPromote	nullptr
#define	playSpellAnimationShine	0x8064581
#define	playSpellAnimationLuna	0x8064A75
#define	playSpellAnimationExcalibur	0x8065415
#define	playSpellAnimationGespenst	0x8065E09
#define	playSpellAnimationAura	0x8066525
#define	playSpellAnimationLuce	0x8066B41
#define	playSpellAnimationErishkigal	0x8067295
#define	playSpellAnimationFillaMight	0x80679F5
#define	playSpellAnimationThorIre	0x8067A31
#define	playSpellAnimationNiniGrace	0x8067A6D
#define	playSpellAnimationSetLitany	0x8067AA9
#define	playSpellAnimationStone	0x8069805
#define	playSpellAnimationIvaldi	0x8067B95
#define	playSpellAnimationDemonLight	0x80688BD
#define	playSpellAnimationGleipnir	0x806AEA9
#define	playSpellAnimationCrimsonEye	0x806C1E9
#define	playSpellAnimationEvilEye	0x8069AC9
#define	playSpellAnimationShadowshot	0x806D219
#define	playSpellAnimationDemonSurge	0x806D81D
#define	playSpellAnimationNaglfar	0x8069EAD
#define	playSpellAnimationWretchedBreath	0x806AB0D

#endif

#ifdef FE8U

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
//#define playSpellAnimationApocalypse 0x08060289
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

#endif

#define endSpellAnimationTable nullptr,nullptr

#ifndef FE6
extern void playSpellAnimationApocalypse(AnimationInterpreter *AIS);
#endif

#endif /* SPELL_ANIMATION_TABLE_H_ */
