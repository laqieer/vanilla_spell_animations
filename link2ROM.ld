SECTIONS
{
	/* Common sections */
	. = 0x8000000;
	.rom : {*.o(.rom)}
#ifdef FE6
	. = 0x8800000;
#else
	. = 0x9000000;
#endif
	.text : {*(.text)}
	.rodata : {*(.rodata)}
	
	/* User-defined sections */
	
#ifdef FE6
	spellAnimationTableAddr = 0x804C8C8;
	fireSpellAnimationID = 0x8663170;
#endif
	
#ifdef FE7J
	spellAnimationTableAddr = 0x805609C;
	fireSpellAnimationID = 0x8D61A1C;
#endif	

#ifdef FE7U
	spellAnimationTableAddr = 0x80558B4;
	fireSpellAnimationID = 0x8C99D64;
#endif
	
#ifdef FE8J
	spellAnimationTableAddr = 0x805C19C;
	fireSpellAnimationID = 0x89044F8;
#endif	
	
#ifdef FE8U
	spellAnimationTableAddr = 0x805B3F8;
	fireSpellAnimationID = 0x88AFF6C;
#endif
	
	. = spellAnimationTableAddr;
	.spellAnimationTableAddr : {*(.spellAnimationTableAddr)}
	. = fireSpellAnimationID;
	.fireSpellAnimationID : {*(.fireSpellAnimationID)}
}