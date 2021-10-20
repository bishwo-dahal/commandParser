CC=g++
TARGET=command
CV=gnu++17
CO=firstopt
CO2=secondopt
CO3=-g
CO4=-gb

FILE1=cmd.cpp
FILE2=commandParser.cpp

simple:
	$(CC) -std=${CV} ${FILE1} ${FILE2} -o ${TARGET}
cmd:	
	$(CC) -std=${CV} ${FILE1} ${FILE2} -o ${TARGET} 
	./${TARGET} ${CO} ${CO2} ${CO3} ${CO4}
	cls	
