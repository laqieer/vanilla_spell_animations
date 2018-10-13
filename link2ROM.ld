SECTIONS
{
	. = 0x8000000;
	.rom : {*.o(.rom)}
	. = 0x9000000;	
	.text : {*(.text)}
	.rodata : {*(.rodata)}
}