; display those numbers containing binary sequence 11
		ORG 00H

; GIVEN DATA
		MOV 55H,#25H
		MOV 56H,#3DH
		MOV 57H,#0F7H
		MOV 58H,#13H
		MOV 59H,#0C9H
		MOV 5AH,#4EH
		MOV 5BH,#62H
		MOV 5CH,#77H
		MOV 5DH,#0B8H
		MOV 5EH,#0EBH
		
; MAIN ROUTINE
LOOP:	MOV R0,#55H ;base address
		MOV R6,#0AH ;counter = no of given data
AGN:	ACALL B_SEQ
		INC R0
		DJNZ R6,AGN
		AJMP LOOP
		
; SEARCH FOR BINARY SEQUENCE AND DISPLAY		
B_SEQ:	MOV A,@R0
		MOV R1,A
		MOV R2,#08H
BITT:	RLC A
		DEC R2
		JC CHK_NXT
		DJNZ R2,BITT
		RET
CHK_NXT:RLC A
		DEC R2
		JNC BITT
		MOV A,R1
		MOV P0,A
		ACALL DELAY
		RET

; DELAY ROUTINE
DELAY: 	MOV R3,#7
HERE1:	MOV R4,#255
HERE2: 	MOV R5,#255
HERE3:	DJNZ R5,HERE3
		DJNZ R4,HERE2
		DJNZ R3,HERE1
		RET
		
		END