;Question 2 - 4
;TITLE: Lab-2
;AUTHOR: Hussain
;ecx = 110010101101b + 45h-73o + ebx -ecx + 1
INCLUDE Irvine32.inc
.code
	main PROC
	mov ecx, 0d
	mov ebx, 0d
	mov ecx, 110010101101b
	add ecx, 45h
	sub ecx, 73o
	add ecx, ebx
	sub ecx, ecx
	add ecx, 1d
	call DumpRegs
	exit
	main ENDP
END main