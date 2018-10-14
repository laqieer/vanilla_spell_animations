/*
 * spellAnimationApocalypse.c
 *
 *  Created on: 2018年10月14日
 *      Author: Destiny
 */

#include "animation.h"
#include "proc.h"

const char efxApocalypse[] = "efxApocalypse";


void ApocalypseMain(ProcInst *instance)
{
	endSpellAnimation();
	endCasting();
	breakLoop(instance);
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
