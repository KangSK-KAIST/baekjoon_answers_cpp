CC:=gcc
CFLAGS:=-g -Wall -Werror

problems = \
	1000 \
	1001 \
	1002 \
	15552

all: $(problems)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm $(problems)