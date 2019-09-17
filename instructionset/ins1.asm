cseg at 0h
mov 20h,#0x34
mov sp,#0x00
pop 30h; pop not done bcz sp is 00h it will off
push 20h;push it to 00h & data stored in r0
end

