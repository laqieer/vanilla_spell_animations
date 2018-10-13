SECTIONS
{
	/* Common sections */
	. = 0x8000000;
	.rom : {*.o(.rom)}
	. = 0x9000000;	
	.text : {*(.text)}
	.rodata : {*(.rodata)}
	
	/* User-defined sections */
	. = 0x805B3F8;
	.spellAnimationTableAddr : {*(.spellAnimationTableAddr)}
	. = 0x88AFF6C;
	.fireSpellAnimationID : {*(.fireSpellAnimationID)}
}