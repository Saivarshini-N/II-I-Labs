ASSUME CS: CODE, DS: DATA
DATA SEGMENT
	STR1 DB"ANURAG#"
	STR2 DB"#"
DATA ENDS
CODE SEGMENT
START:
	MOV AX, DATA
	MOV DS, AX
	MOV ES, AX
	CLD
	LEA DI, STR1
	MOV AL, STR2
	MOV CX, 20
	MOV AH, 00H
	REPNE SCASB
	DEC DI
	MOV AX, DI
	INT 03H
CODE ENDs
END START
