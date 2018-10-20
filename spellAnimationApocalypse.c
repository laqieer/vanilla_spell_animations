/*
 * spellAnimationApocalypse.c
 *
 *  Created on: 2018年10月14日
 *      Author: Destiny
 */

#include "animation.h"
#include "proc.h"

const char efxApocalypse[] = "efxApocalypse";

void playApocalypseMagicCircle(AnimationInterpreter *targetAIS, short a2)
{

}

void playApocalypsePalette(AnimationInterpreter *targetAIS)
{

}

void sub_8052C68()
{

}

void sub_805315C(AnimationInterpreter *targetAIS, short a2, short a3)
{

}

void sub_80531C4(AnimationInterpreter *targetAIS, short a2, short a3)
{

}

void playApocalypseCharm(AnimationInterpreter *targetAIS)
{

}

void sub_805304C(AnimationInterpreter *targetAIS, short a2)
{

}

ProcInst *sub_804C8D4(AnimationInterpreter *targetAIS, int a2, int a3, int a4, int a5)
{

}

void sub_80530E4(AnimationInterpreter *targetAIS, ProcInst *instance, short a3)
{

}

int sub_804CD4C()
{

}

void sub_804CC68(AnimationInterpreter *targetAIS, int a2, int (*func)())
{

}

void sub_804685C(AnimationInterpreter *targetAIS, short a2, short a3)
{

}

void playApocalypseWhirlPool(AnimationInterpreter *targetAIS, short a2)
{

}

void sub_804CD88(AnimationInterpreter *targetAIS, short a2, short a3, int a4, int a5, int a6)
{

}

void playApocalypseBlackSun(AnimationInterpreter *targetAIS, short a2, short a3)
{

}

void playApocalypseDust(AnimationInterpreter *targetAIS, short a2)
{

}

void sub_804D050(AnimationInterpreter *targetAIS, short a2)
{

}

void ApocalypseMain(ProcInst *instance)
{
	AnimationInterpreter *targetAIS;
	int frame, startFrame;

	targetAIS = getTargetAIS(*(AnimationInterpreter **)&instance->body.freeSpace[51]);
	startFrame = getAnimationStartFrame();
	frame = ++*(s16 *)&instance->body.freeSpace[3];
	if(frame == 1)
		scrollScreen(*(AnimationInterpreter **)&instance->body.freeSpace[51], -1);
	frame = *(s16 *)&instance->body.freeSpace[3];

	switch(frame - startFrame)
	{
	case 1:
		playApocalypseMagicCircle(targetAIS, 465);
		playApocalypsePalette(targetAIS);
		sub_8052C68();
		sub_805315C(targetAIS, 395, 10);
		sub_80531C4(targetAIS, 415, 20);
		playApocalypseCharm(targetAIS);
		sub_805304C(targetAIS, 465);
		sub_80530E4(targetAIS, sub_804C8D4(targetAIS, 465, 20, 128, 3), 140);
		sub_804CC68(targetAIS, 465, sub_804CD4C);
		playSound(260, 256, 120, 0);
		break;
	case 146:
		playSound(261, 256, 120, 0);
		break;
	case 460:
		sub_804685C(targetAIS, 10, 20);
		break;
	case 469:
		playApocalypseWhirlPool(targetAIS, 160);
		sub_804CD88(targetAIS, 110, 40, 16, 0, 0);
		playApocalypseBlackSun(targetAIS, 140, 24);
		playApocalypseDust(targetAIS, 60);
		sub_804D050(targetAIS, 90);
		playSound(262, 256, 120, 0);
		break;
	case 525:
		targetAIS->unk_10 |= 9u;
		reduceHPBar(targetAIS, instance->body.freeSpace[0]);
		if ( !instance->body.freeSpace[0] )
			playHitSound(targetAIS);
		break;
	case 635:
		endSpellAnimation();
		endCasting();
		breakLoop(instance);
		break;
	default:
		break;
	}
}

const ProcCode proc_efxApocalypse[] =
{
	proc_name(efxApocalypse),
	proc_call(ApocalypseMain),
	proc_end
};

void playSpellAnimationApocalypse(AnimationInterpreter *AIS)
{
	ProcInst *instance;
	int index;

	beginSpellAnimation();
	beginCasting();
	resetBG1();
	instance = newProcInst(proc_efxApocalypse, 3);
	*(AnimationInterpreter **)&instance->body.freeSpace[51] = AIS;
	*(u16 *)&instance->body.freeSpace[3] = 0;
	index = GetSomeAISRelatedIndexMaybe(AIS);
	instance->body.freeSpace[0] = GetSomeBoolean(index);
}
