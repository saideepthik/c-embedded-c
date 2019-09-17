val1 equ 0x6743
val2 equ 0x4567
cseg at 0h
mov a,#val1;lsb of val1
mov r0,#val2;lsb of val2
subb a,r0
mov 20h.0,c
mov 22h,a;lsb of result after subb
mov a,#val1>>8;msb of val2
mov r0,#val2>>8;msb of val2
subb a,r0
mov 21h,a;byte 1 result after add
mov 20h.1,c;byte 2 result after add
end
