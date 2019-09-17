count equ 30
cseg at 0h
mov a,#25h ;load 25h into a
mov r4,#62 ;load the decimal value 62 into r4
mov b,#40h ;load 40h into b
mov dptr,#4521h ;dptr=4512h is same as dpl,#50h and dph,#25
;mov dptr,#68975 is illegal!!value >65535(fffffh)
mov r4,#count ;r4=1e
mov dptr,#mydata ;dptr=200h
cseg at 200h ;if we use org it will takeall byte between 0h to 200h
mydata: db "america"
end
