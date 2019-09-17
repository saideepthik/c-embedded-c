cseg at 0h
mov 30h,#0x89
mov r0,#0x30
mov a,#0x12
xch a,@r0;data at address stored in r0 will be exchanged with a
end
