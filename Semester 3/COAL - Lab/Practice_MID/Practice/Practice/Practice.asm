;Question: 5
include irvine32.inc
.data
arr WORD 10, 4, 7, 14, 299, 156, 3, 19, 29, 300, 20
sorted BYTE "Sorted array is: ",0
space BYTE ", ",0
.code
main PROC
	mov ecx, 11
	mov esi, 0
	mov eax, 0
	first:
		push ecx
		mov ecx, 10
		second:
			mov ax, arr[esi]
			cmp ax, arr[esi+2]
			JG swap
		cont:
			add esi, 2
			loop second
		pop ecx
		loop first
JMP print
swap:
	mov bx, arr[esi+2]
	xchg ax, bx
	mov arr[esi], ax
	mov arr[esi+2], bx
	JMP cont
print:
	mov edx, 0
	mov eax, 0
	mov esi, 0
	mov ecx, 11
	mov edx, offset sorted
	call writeString
	mov edx, offset space
	printing:
		mov ax, arr[esi]
		call writeInt
		call writeString
		add esi, 2
		loop printing
main ENDP
END main