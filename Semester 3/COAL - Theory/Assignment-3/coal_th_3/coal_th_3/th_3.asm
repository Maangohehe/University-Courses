;q1

include irvine32.inc
.code
main PROC
MOV AL, 10000000b ; AL = -128
call dumpregs
NEG AL
call dumpregs
main endp
end main