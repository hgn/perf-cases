include ../perf-cases.mk

OBJS = matrix-mult.o
CFLAGS_LOCAL = 

all: matrix-mult

matrix-mult: $(OBJS)
	gcc -o $@ $(OBJS)

.c.o::
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $(INC_LOCAL) $(INC_DIRS) $< -o $@

clean:
	@rm -rf $(OBJS) matrix-mult
