CC ?= gcc
CFLAGS += -Wall --pedantic -Werror

all:
	$(CC) $(LDFLAGS) -o pointeurs $(CFLAGS) pointeurs.c main.c



