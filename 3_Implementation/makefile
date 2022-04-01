#Targetname : Dependent target name
#<TAB>command
PROJ_NAME = calculator
SRC = calculator.c test_calculator.c unity/unity.c -Iunity

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
          EXEC = out
   endif
endif

build:
        gcc $(SRC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run: build
        ./$(call FixPath,$(PROJ_NAME).$(EXEC))

clean:
        $(RM) $(call FixPath,$(PROJ_NAME).$(EXEC))
"~/.cache/.fr-E369ZA/Makefile" 23L, 391C  