PORJ_NAME = calculator

SRC= calculator.c test_calculator.c

ifdef OS
	RM = del /q
	FixPath = $ (subset /,\,$1)
	EXEC = exe 
else
	ifeq ($(shell uname),Linux)
		RM = rm -rf
		Fixpath = $1
		EXEC = out
	endif
endif

Build:
	gcc $(SRC) ../unity/unity.c -I../unity -o $(call FixPath,$(PORJ_NAME).$(EXEC)) -lm
Run:
	$(RM) $(call FixPath,$(PORJ_NAME).$(EXEC))
clean:
	$(RM) $(call FixPath,$(PORJ_NAME).$(EXEC))
"/.cache/.fr-E369ZA/Makefile" 23L, 391C