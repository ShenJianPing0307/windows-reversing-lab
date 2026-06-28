.586
.model  flat, stdcall
option  casemap:none

.data


.code
main proc
	
	MOV EAX, 0FFFFFFFFh

	MOV AX, 0DDDDh

	MOV AH, 11h

	MOV AL, 22h

	ret
main endp
end