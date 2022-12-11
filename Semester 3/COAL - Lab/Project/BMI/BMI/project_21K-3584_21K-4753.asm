.686 ;Target processor. Use instructions for Pentium class machines
.MODEL FLAT, STDCALL ;Use the flat memory model. Use C calling conventions
.STACK 2048 ;Define a stack segment of 1KB (Not required for this example)
INCLUDE Irvine32.inc
.data
	s_th REAL4 16.0
	mo_th REAL4 17.0
	mi_th REAL4 18.5
	norm REAL4 25.0
	ov_wght REAL4 30.0
	ob_cl1 REAL4 35.0
	ob_cl2_3 REAL4 40.0
	message BYTE "Height(in meters) cannot be less than your weight(in kg)",0
	titleB BYTE "Calculation Error",0
	thin1 BYTE "(Severe Thinness)",0
	thin2 BYTE "(Moderate Thinness)",0
	thin3 BYTE "(Mild Thinness)",0
	normali BYTE "(Normal)",0
	ovr_wght BYTE "(Overweight)",0
	obc1 BYTE "(Obese class I)",0
	obc2 BYTE "(Obese class II)",0
	obc3 BYTE "(Obese class III)",0

setBG PROTO C
displayError PROTO C
clearStdout PROTO C
clear32Regs PROTO C
print_to_stdout PROTO C,
	msgToSay:PTR DWORD
compareAndPrint PROTO C, 
	bmi:REAL4
.CODE

setBG PROC C
	mov eax, yellow(blue*16)
	call SetTextColor
ret
setBG ENDP

;prints msg box
displayError PROC C USES edx ebx
	mov edx, OFFSET message
	mov ebx, OFFSET titleB
	call MsgBox
ret
displayError ENDP

;Code to clear stdout
clearStdout PROC C
	call Clrscr
ret
clearStdout ENDP

;Code to compare BMI
compareAndPrint PROC C, bmi:REAL4
	mov eax, 0
	FINIT
	FLD bmi
	FCOM s_th
	FNSTSW AX
	SAHF
	JB sev_th	;if less than 16
	JA mod_th	;if above 16
cont1:
	FCOM mo_th ;if above 17
	FNSTSW AX
	SAHF
	JA mild_th ;jmp to print mild_th
cont2:
	FCOM mi_th ;if above 18.5
	FNSTSW AX
	SAHF
	JA pr_norm
cont3:
	FCOM norm
	FNSTSW AX
	SAHF
	JA pr_ov ;greater than 25?
cont4:
	FCOM ov_wght
	FNSTSW AX
	SAHF
	JA pr_ov1
cont5:
	FCOM ob_cl1
	FNSTSW AX
	SAHF
	JA pr_ob1
sev_th:
	INVOKE print_to_stdout, ADDR thin1
	JMP endd
mod_th:
	FCOM mo_th 
	FNSTSW AX
	SAHF
	JA cont1 ;but greater than 17
	INVOKE print_to_stdout, ADDR thin2 ;and less than 17
	JMP endd
mild_th:
	FCOM mi_th
	FNSTSW AX
	SAHF
	JA cont2 ;jmp back if greater than 18.5
	INVOKE print_to_stdout, ADDR thin3
	JMP endd
pr_norm:
	FCOM norm
	FNSTSW AX
	SAHF
	JA cont3 ;if greater than 25
	INVOKE print_to_stdout, ADDR normali ;print normal
	JMP endd
pr_ov:
	FCOM  ov_wght ;greater than 30?
	FNSTSW AX
	SAHF
	JA cont4 ;back out
	INVOKE print_to_stdout, ADDR ovr_wght
	JMP endd
pr_ov1:
	FCOM ob_cl1
	FNSTSW AX
	SAHF
	JA cont5
	INVOKE print_to_stdout, ADDR obc1
	JMP endd
pr_ob1:
	FCOM ob_cl2_3
	FNSTSW AX
	SAHF
	JA pr_ob2
	INVOKE print_to_stdout, ADDR obc2
	JMP endd
pr_ob2:
	INVOKE print_to_stdout, ADDR obc3
endd:
ret
compareAndPrint ENDP

clear32Regs PROC C
	mov eax, 0
	mov ebx, 0
	mov ecx, 0
	mov edx, 0
	mov esi, 0
	mov edi, 0
ret
clear32Regs ENDP
END