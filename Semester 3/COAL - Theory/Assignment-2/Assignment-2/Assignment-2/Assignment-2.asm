include irvine32.inc

.code
main proc
Mov al,  00100101b
Test al, 00001000b
call dumpregs
Mov al,  00100100b
Test al, 00001001b
call dumpregs
exit
main endp
end main
