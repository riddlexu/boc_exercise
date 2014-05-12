default: all
CC=gcc
CFLAGS=-O0 -std=c99
PROGRAM=half user_decide sin_curve

all: $(PROGRAM)
half: half.c
	$(CC) $(CFLAGS) $< -o $@
user_decide: user_decide.c
	$(CC) $(CFLAGS) $< -o $@
sin_curve: sin_curve.c
	$(CC) $(CFLAGS) -lm $< -o $@

.PHONY: clean
clean:
	rm $(PROGRAM)	
