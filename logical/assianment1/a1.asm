num equ 0xffff
den equ 0xfffe
cseg at 0h
mov r1,#num ;lsb of numerator
mov r0,#num>>8 ;msb of numerator
mov r3,#den  ;lsb of denominator
mov r2,#den>>8 ;msb of denominator
mov dptr,#0x00
loop :
mov 31h,r0
mov 30h,r1

mov a,r1
subb a,r3
mov r1,a

mov a,r0
subb a,r2
mov r0,a
jnc iter
sjmp res

iter:
inc dptr
sjmp loop

res:
 mov r6,30h
 mov r7,31h
 mov r4,dpl
 mov r5,dph
end
