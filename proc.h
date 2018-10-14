/*
 * proc.h
 *
 *  Created on: 2018年10月13日
 *      Author: Destiny
 */

#ifndef PROC_H_
#define PROC_H_

#include "type.h"

// Code from which a ProcInst is created
typedef struct ProcCode
{
	unsigned short code;	// code type
	unsigned short sarg;	// short argument
	const void * larg;		// long argument
}ProcCode;

// The head of a ProcInst
typedef struct ProcHead
{
	ProcCode* 	start;			// Pointer to start of ProcCode
	ProcCode* 	cursor;			// Pointer to ProcCode cursor
	void*		destructor;		// Pointer to Destructor func (called when struct is destroyed)
	void*		loop;			// Pointer to Loop func (this is called instead of code when it is not null)
	char*		name;			// Pointer to name
	struct ProcInst*	parent;			// Pointer to Parent ProcInst (If it is Main Proc, Main ProcInst Array Index instead)
	struct ProcInst*	firstChild;		// Pointer to First Child ProcInst (0 if none)
	struct ProcInst*	previous;		// Pointer to Previous ProcInst (0 if first)
	struct ProcInst*	next;			// Pointer to Next Proc
	u16			sleepTimer;			// Sleep Timer (each call to the sleep loop decrements it, the sleep loop will clear itself when this reaches 0)
	u8			mark;			// Mark (Code 000F stores sarg to this byte, used by various funcs)
	u8			bitField;			// Some kind of bitfield (see below for known bits)
}ProcHead;

/*
Field 27 Bitfield: (Needs more research)
	1 = ?
	2 = If is set, it means the ProcInst is "blocking" the parent struct (Parent Block Counter will be decreased on destruction). Set when Create6CBlocking is called.
	4 = ??? (bit set when code 0012 is called, unset at the end of ProcInst construction)
	8 = Somethig related to children (read at 08002E46)
*/

// The body of a ProcInst
typedef struct ProcBody
{
	u8			blockCounter;		// Block Counter (Won't exec self if not 0)
	u8			freeSpace[67];		// 0x43 Bytes (16 Words + 3 bytes) free to use
}ProcBody;

// An instance of Proc
typedef struct ProcInst
{
	ProcHead head;
	ProcBody body;
}ProcInst;

// ProcCode Helper

#define proc_end								{0x00, 0, 0}		// end (suicide)
#define proc_name(name)							{0x01, 0, name}		// set name text pointer
#define proc_call(func)							{0x02, 0, func}		// call function
#define proc_loop(func)                			{0x03, 0, func}		// set loop function
#define proc_setDestructor(func)				{0x04, 0, func}		// set destructor
#define proc_newChild(procCode)					{0x05, 0, procCode}	// new child ProcInst
#define proc_newChildB(procCode)				{0x06, 0, procCode}	// new child ProcInst and yield
#define proc_newMainProc(procCode)				{0x07, 0, procCode}	// new global ProcInst
#define proc_waitFor(procCode)					{0x08, 0, procCode} // continue only if procCode exists, yields without forwarding otherwise
#define proc_killAll(procCode)					{0x09, 0, procCode}	// kill all instances of a ProcCode
#define proc_breakAllLoop(procCode)				{0x0A, 0, procCode}	// clear callback for all instances of a ProcCode
#define proc_label(label)						{0x0B, label, 0}	// define a label
#define proc_goto(label)						{0x0C, lebel, 0}	// goto a label
#define proc_jumpTo(procCode)					{0x0D, 0, procCode}	// jump to a position
#define proc_sleep(time)						{0x0E, time, 0}		// sleep for given time
#define proc_mark(mark)							{0x0F, mark, 0}		// store mark to field 26 in ProcHead
#define proc_block								{0x10, 0, 0}		// yield (stops execution until next call to interpreter)
#define proc_suicideIfDuplicate					{0x11, 0, 0}		// commit suicide if other instances exist
#define proc_setBitFlag4						{0x12, 0, 0}		// set bit 4 in bitField
#define proc_while(func)						{0x14, 0, func}		// call function. If return 1, yield without forwarding, continue otherwise
#define proc_until(func)						{0x16, 0, func}		// call function. If return 0, yield without forwarding, continue otherwise
#define proc_killDuplicates						{0x17, 0, 0}		// delete all other instances
#define proc_callWithArg(func, arg)				{0x18, arg, func}	// call function with an argument
#define proc_anony								{0x19, 0, 0}		// do nothing. Maybe used to replace proc_name for release.

// ProcInst Interfaces
//TODO:unfinished yet

#define newProcInst		((ProcInst*(*)(const ProcCode*, int))0x8002C7D)		// Allocates a new ProcInst with ProcCode pointer (field 0x00&0x04) and its parent
#define newProcInstB	((ProcInst*(*)(const ProcCode*, int))0x8002CE1)		// Calls newProcinst, sets BitFlag2. Increments its parent's Block Counter.
#define	breakLoop		((void(*)(ProcInst*))0x8002E95)		// Sets loop function in ProcInst to null (used by loop function to break loop)

#endif /* PROC_H_ */
