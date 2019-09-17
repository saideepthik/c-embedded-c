cseg at 0
mov r0,#30h
mov r1,#01
mov r2,#00
mov dptr,#30h
loop :
mov @r0,a
add a,r1
mov 20h,r1
mov r2,20h
mov r1,a
mov a,r2
inc r0
cjne r0,#0x3e,loop
 dec r0
rev :
mov a,@r0
movx @dptr,a
inc dptr
dec r0
cjne r0,#0x30,rev
end
