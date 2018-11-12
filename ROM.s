	.section .rom, "xa"
	.global _start
_start:
	.ifdef FE6
		.incbin "I:\\GBA FE ROM\\FE6(J).gba"
	.endif
	.ifdef FE7J
		.incbin "I:\\GBA FE ROM\\FE7(J).gba"
	.endif
	.ifdef FE7U
		.incbin "I:\\GBA FE ROM\\FE7(US).gba"
	.endif
	.ifdef FE8J
		.incbin "I:\\GBA FE ROM\\FE8(J).gba"
	.endif
	.ifdef FE8U
		.incbin "I:\\GBA FE ROM\\FE8(US).gba"
	.endif
