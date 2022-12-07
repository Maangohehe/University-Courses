;Question: 7
;Roll Number: 21K-3584
include irvine32.inc
TakeInput Proto
Armstrong proto num:DWORD
Display proto answer:DWORD
.data
	str1 BYTE "Input a number: ",0
	num DWORD ?
	power DWORD 0
	yes BYTE " is armstrong.",0
	no BYTE " is not armstrong.",0
	sum DWORD 0
.code
main proc
	invoke TakeInput
	exit
main endp

TakeInput PROC
	mov eax, esp
	call writeHex
	call crlf
	mov eax, 0
	mov edx, offset str1
	call writeString
	call readDec
	mov num, eax
	invoke Armstrong, num
ret
TakeInput ENDP

Armstrong PROC arm_num:Dword
	LOCAL temp:DWORD
	LOCAL answer:DWORD
	mov eax, esp
	mov ebx, 10
	call writeHex
	mov ecx, arm_num ;First we calculate the power count
	mov eax, arm_num
	cmp eax, 9
	JBE one_dig
	L1:
		mov edx, 0
		div ebx
		mov ecx, edx
		inc power
		cmp eax, 0
		JE CHECK_ARM
		JMP L1
one_dig:
	JMP it_is
CHECK_ARM:
	mov eax, arm_num
	L2:
	continue:
		cmp eax, 0
		JE Check
		mov edx, 0
		div ebx
		push eax
		;Calculate Power
		mov ecx, power
		dec ecx
		mov eax, edx
		mov temp, edx
		L3:
			mul temp
			loop L3
		add sum, eax
		pop eax
		JMP continue
	Check:
		mov eax, sum
		cmp eax, num
		JE it_is
		mov answer, 0
		jmp endd
		it_is:
		mov answer, 1
	endd:
	invoke Display, answer
ret
Armstrong endp

Display PROC answer:DWORD
	mov eax, esp
	call writeHex
	mov eax, num
	call crlf
	cmp answer, 1
	JNE it_is_not
	mov edx, offset yes
	call writeDec
	call writeString
	call crlf
	JMP END_IT
it_is_not:
	call writeDec
	mov edx, offset no
	call writeString
	call crlf
END_IT:
ret
Display ENDP

end main