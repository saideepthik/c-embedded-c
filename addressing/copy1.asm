cseg at 0h
mov 20h,#0x34
mov a,20h
mov r0,#200
mov p2,#0x00;page no. is 0x00
movx @r0,a
end
