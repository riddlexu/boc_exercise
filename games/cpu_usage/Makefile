default: all
CC=gcc

PROGRAM=half user_decide sin_curve

all: $(PROGRAM)
half: half.c
	$(CC) $< -o $@
user_decide: user_decide.c
	$(CC) $< -o $@
sin_curve: sin_curve.c
	$(CC) $< -o $@

.PHONY: clean
clean:
	rm $(PROGRAM)	
