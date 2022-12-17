include irvine32.inc

DivTill5 PROTO, n:DWORD, divi:DWORD

.code
main PROC
	mov eax, 0D4A4H
	mov ecx, 0Ah ;our divisor
	INVOKE DivTill5, eax, ecx
exit
main endp

DivTill5 PROC, n:DWORD, divi:DWORD
	CMP n, 05h
	JBE L4
	mov eax, n
	mov edx, 0
	mov ecx, divi
	div ecx
	mov n, eax
	INVOKE DivTill5, n, divi
L4:
ret
DivTill5 ENDP
end main