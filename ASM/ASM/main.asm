.386
.model flat, stdcall
.stack 4096
ExitProcess proto, dwExitCode:dword

.data
	_a		DB		"lucrarea_1", 10, 13;
	_b		DB		2 dup(0);
	_c		DW		38, -15, 78, 41,12;
	_d		DD		678EFh, 3489, 456;
	sum		DWORD	?
.code
main proc
	mov EAX, 7
	add EAX, 4
	mov sum, EAX

	invoke ExitProcess, 0

main endp
end main