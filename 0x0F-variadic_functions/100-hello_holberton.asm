	SECTION .data
msg:	 	db "Hello, Holberton", 10
msglen:	    	equ $-msg

	SECTION .text

	        global main
main:
	        mov     eax, 4
	        mov     ebx, 1
	        mov     ecx, msg
		mov	edx, msglen
		int	80h

	        mov  	eax, 1
	        mov     ebx, 0
		int 	80h
