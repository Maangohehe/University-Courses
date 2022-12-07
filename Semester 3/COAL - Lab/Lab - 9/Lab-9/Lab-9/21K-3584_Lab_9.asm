;Question: 11
;Roll number: 21K-3584
include irvine32.inc
.data
	str_num BYTE "100123456789765",0
	dec_place DWORD ?
	str1 BYTE "Input the decimal place: ",0
	str_new BYTE 16 DUP(?)
.code
main proc
	mov edx, offset str1
	call writeString
	call readDec
	mov dec_place, eax
	call writeScaled
	mov edx, offset str_new
	call writeString
exit
main ENDP

WriteScaled PROC
	mov ecx, LENGTHOF str_num
	mov ebx, ecx
	dec ebx
	mov eax, 0
	mov esi, 0
	L1:
		cmp esi, dec_place
		JNE skip
		mov str_num[esi], '.'
		inc esi
		dec ecx
	skip:
		mov al, str_num[esi]
		mov str_new[esi], al
		inc esi
	loop L1
ret
WriteScaled ENDP
END main