;Q10

include irvine32.inc
CountNearMatches PROTO

.data
	arrS1 SDWORD 4, 5, 43, 4, 3, 6,-2, -4
	arrS2 SDWORD 9, 2, 3, -5, -3, 2, 11, 2
.code
main PROC
	mov ebx, 4 ;max difference is 4
	push ebx
	push offset arrS1
	push offset arrS2
	push LENGTHOF arrS1
	push LENGTHOF arrS2
	INVOKE CountNearMatches
exit
main ENDP

CountNearMatches PROC
	LOCAL size1:DWORD, size2:DWORD, maxDF:DWORD
	mov eax, 0
	push ebp
	mov ebp, esp
	mov edx, [ebp+40]
	mov maxDF, edx
	mov edx, [ebp+28]
	mov size1, edx
	mov ebx, [ebp+24]
	mov size2, ebx
	mov esi, [ebp+36]
	mov edi, [ebp+32]
	mov ecx, size1
L1:
	mov ebx, [esi]
	sub ebx, [edi]
	CMP ebx, maxDF
	JNLE L2
	inc eax
L2:
	add esi, type arrS1
	add edi, type arrS2
	CMP size2, 0
	JLE ENDD
	dec size2
	LOOP L1
ENDD:
leave
ret
CountNearMatches ENDP
END main