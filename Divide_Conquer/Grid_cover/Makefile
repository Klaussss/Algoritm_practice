OBJ = main.o
EXE = main
CXXFLAG=-lm

${EXE}:${OBJ}
	gcc $< -o $@ ${CXXFLAG}

${OBJ}:%.o:%.cc
	g++ -c $<

.PHONY:clean
clean:
	@rm ${OBJ} ${EXE}
run:
	./${EXE}
# @ : no output
# - : ignore the mistake and go on
