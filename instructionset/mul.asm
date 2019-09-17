val1 equ 0x1234
val2 equ 0x2345
cseg at 0h
mov a,#val1
mov b,#val2
mul ab
mov 19h,a
mov 21h,b
mov a,#val1
mov b,#val2>>8
mul ab
mov 22h,a
mov 23h,b
mov a,#val1>>8
mov b,#val2
mul ab
mov 24h,a
mov 25h,b
mov a,#val1>>8
mov b,#val2>>8
mul ab
mov 26h,a
mov 16h,b
mov a,21h
add a,22h
mov 20h.0,c
addc a,24h
mov 20h.0,c
mov 18h,a
mov a,23h
addc a,25h
mov 20h.0,c
addc a,26h
mov 17h,a
mov 20h.0,c
end
