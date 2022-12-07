;Q1

include irvine32.inc
arrSum PROTO, 
	array1:PTR DWORD, size_arr:DWORD, starti:DWORD, endi:DWORD

.data
	arr1 SDWORD 30, -40, 20, 65, 80,45
	strt BYTE ?
	endt BYTE ?
.code
main PROC
	mov strt, 20
	mov endt, 50
	INVOKE arrSum, ADDR arr1, LENGTHOF arr1, strt, endt
	call  crlf
	mov strt, 35
	mov endt, 90
	INVOKE arrSUM, ADDR arr1,LENGTHOF arr1, strt,endt
exit
main endp

arrSum PROC USES ebx ecx edx esi edi, array1:PTR DWORD, size_arr:DWORD, starti:DWORD, endi:DWORD
	LOCAL flag:BYTE ;flag tell when to start sum
	mov flag, 10
	mov esi, array1
	mov ecx, size_arr
	mov ebx, starti
	mov edx, endi
	mov eax,0
	L1:
		cmp ebx, [esi] ;once i is found change flag=1
		JE start_flag
	cont_1:
		cmp edx, [esi];
		JE end_flag
		cmp flag, 1
		JE do_sum ;once flagis 1 startmcvvm sum
	cont_2:
		cmp flag, 0
		JE end_it_add ;if 0 stop
		add esi, type arr1
		LOOP L1
		JMP end_it
	do_sum:
		add eax, [esi]
		add esi, type arr1
		LOOP L1
JMP end_it
start_flag:
	mov flag, 1
	JMP cont_1
end_flag:
	mov flag, 0
	JMP cont_2
end_it_add:
	add eax,[esi];add the last inclusive  value
	call writeDec
	JMP end_fin
end_it:
	call writeDec
end_fin:
ret
arrSum ENDP
end main