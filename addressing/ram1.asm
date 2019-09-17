cseg at 0h
mov r0,#0x30
mov a,r0 ;copy the contents of r0 into a
mov r2,a ;copy the contents of a into r2
add a,r5 ;add the contents of r5 to contents of a
add a,r7 ;add the contents of r7 to contents of a
mov r6,a ;save accumulator in r6
mov dptr,#25f5h
mov r7,dpl
mov r6,dph
end
