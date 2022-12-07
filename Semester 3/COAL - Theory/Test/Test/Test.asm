;Question 7
;Roll Number: 21K-3584

include irvine32.inc
;move textequ <mov>

.data
	arrayB BYTE 60, 70, 80
	arrayW WORD 150, 250, 350
	arrayD DWORD 600, 1200, 1800
.data?
	sum1 BYTE ?
	sum2 WORD ?
	sum3 DWORD ?
.code
main PROC
	mov esi, OFFSET arrayB
	mov eax, 0
	add al, [esi]
	add al, [esi + TYPE arrayB * 2]
	mov esi, OFFSET arrayW
	mov ebx, 0
	add bx, [esi]
	add bx, [esi + TYPE arrayW * 2]
	mov esi, OFFSET arrayD
	mov ecx, 0
	mov esi, OFFSET arrayD
	add ecx, [esi + TYPE arrayD * 2]
	add ecx, [esi]
main ENDP
END main