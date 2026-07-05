.586
.model flat, stdcall
option casemap:none

.data

.code
main proc
	; CY进位标志
	;MOV AL, 0FFH
	;ADD AL, 1H

	;  1111 1111
	;  0000 0001
	;10000 0000

	; PE奇偶标志
	;MOV EAX, 0FFFFFFFFH
	;ADD EAX, 1
	; 0000 0000

	;辅助进位
	;MOV AL, 0FH
	;ADD AL, 1
	; AC =1
	; 0000 1111
	; 0000 0001
	; 0001 0000

	;MOV AX, 0FFH
	;ADD AX, 1
	; AC =1
	; 0000 0000 1111 1111
	; 0000 0000 0000 0001
	; 0000 0001 0000 0000 

	MOV AX, 0F0H
	ADD AX, 10H
	; AC =0
	; 0000 0000 1111 0000
	; 0000 0000 0001 0000
	; 0000 0001 0000 0000 


	ret
main endp
end