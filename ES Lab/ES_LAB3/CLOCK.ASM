;REAL TIME CLOCK
		ORG 00H
		
		MOV TMOD,#10H 		; TIMER 1 IN MODE 1
		MOV P2,#00H			; DEACTIVATE ALL 7 SEG DISPLAY
		MOV DPTR,#LABEL1	; POINTER TO LED PATTERN
		
START:	MOV R0,#00		;2
		MOV R1,#00		;2									TOTAL 4
;--------------------------------------------------------------------------

; DISPLAY
;	---------------------------------------------------------

LOOP1:	MOV R7,#27H		;2
MAIN:	MOV A,R0		;1
		ACALL HTOD		;2		IN 9
		MOV B,A			;1
		ANL A,#0FH		;2
		ACALL DISPLAY	;2		IN 3
		SETB P2.3		;1
		MOV P0,A		;1
		ACALL DELAY_T	;2		IN 
		;ACALL DELAY		;2		IN 
		CLR P2.3		;1
		
		MOV A,B			;1
		ANL A,#0F0H		;2
		SWAP A			;1
		ACALL DISPLAY	;2		IN 3
		SETB P2.2		;1
		MOV P0,A		;1
		ACALL DELAY_T		;2		IN 10
		;ACALL DELAY		;2		IN 
		CLR P2.2		;1
		
		MOV A,R1		;1
		ACALL HTOD		;2		IN 9
		MOV B,A			;1
		ANL A,#0FH		;2
		ACALL DISPLAY	;2		IN 3
		ORL A,#80H		;2
		SETB P2.1		;1
		MOV P0,A		;1
		ACALL DELAY_T		;2		IN 10
		;ACALL DELAY		;2		IN
 		CLR P2.1		;1
		
		MOV A,B			;1
		ANL A,#0F0H		;2
		SWAP A			;1
		ACALL DISPLAY	;2		IN 3
		SETB P2.0		;1
		MOV P0,A		;1
		ACALL DELAY_T		;2		IN 10
		;ACALL DELAY		;2		IN 
		CLR P2.0		;1
		DJNZ R7,MAIN	;2					SUB 54
		;DJNZ R6,LOOP1	;2
;	-----------------------------------------------------------
	
		CJNE R0,#3BH,LESS		;3
		INC R1					;1
		MOV R0,#0FFH			;2
LESS:	INC R0					;1
		CJNE R1,#3CH,LOOP1		;3
		
		AJMP START				;2
;------------------------------------------------------------------------------------
					
;HEX TO DEC CONVERTER
HTOD:	MOV B,#0AH				;2
		DIV AB					;1
		SWAP A					;1
		ADD A,B					;1
		RET						;2									TOTAL 07
;------------------------------------------------------------------------------------

; DELAY
DELAY:	MOV R3,#02H		;2
DEL1:	MOV R2,#0FAH	;2
DEL2:	DJNZ R2,DEL2	;2
		DJNZ R3,DEL1	;2
		RET				;2											TOTAL 10
;------------------------------------------------------------------------------------

; DELAY TIMER

DELAY_T:MOV TL1,#0EH	;2	
		MOV TH1,#0E9H	;2
		
		SETB TR1		;1
AGAIN:	JNB TF1, AGAIN	; X = 
		CLR TR1			;1
		CLR TF1			;1
		RET				;2 											TOTAL 9 + X
;------------------------------------------------------------------------------------

;CHOOSE REQUIRED PATTERN
DISPLAY:MOVC A,@A+DPTR	;1
		RET				;2											TOTAL 3
;------------------------------------------------------------------------------------

;LED PATTERNS FOR NUMBERS 0-9
LABEL1:	DB 3FH
		DB 06H
		DB 5BH
		DB 4FH
		DB 66H
		DB 6DH
		DB 7DH
		DB 07H
		DB 7FH
		DB 6FH
				
		END