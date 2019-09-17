cseg at 0h
mov dptr,#0x300
mov a,#0x12
movc a,@a+dptr
end
