# Simple Makefile to build example programs into bin/

CC := clang
CFLAGS := -std=c11 -Wall -Wextra -Wpedantic -O0 -g
BIN := bin

EXES := \
	$(BIN)/hello_world \
	$(BIN)/variables \
	$(BIN)/operators \
	$(BIN)/control_if_switch \
	$(BIN)/loops \
	$(BIN)/functions \
	$(BIN)/arrays \
	$(BIN)/strings \
	$(BIN)/pointers \
	$(BIN)/structs \
	$(BIN)/file_io \
	$(BIN)/malloc_recursion_args

.PHONY: all clean dirs

all: dirs $(EXES)

 dirs:
	mkdir -p $(BIN)

$(BIN)/hello_world: src/01_intro/hello_world.c | dirs
	$(CC) $(CFLAGS) -o $@ $<

$(BIN)/variables: src/02_basics/variables.c | dirs
	$(CC) $(CFLAGS) -o $@ $<

$(BIN)/operators: src/03_operators/operators.c | dirs
	$(CC) $(CFLAGS) -o $@ $<

$(BIN)/control_if_switch: src/04_control_flow/if_switch.c | dirs
	$(CC) $(CFLAGS) -o $@ $<

$(BIN)/loops: src/04_control_flow/loops.c | dirs
	$(CC) $(CFLAGS) -o $@ $<

$(BIN)/functions: src/05_functions/functions.c | dirs
	$(CC) $(CFLAGS) -o $@ $<

$(BIN)/arrays: src/06_arrays/arrays.c | dirs
	$(CC) $(CFLAGS) -o $@ $<

$(BIN)/strings: src/07_strings/strings.c | dirs
	$(CC) $(CFLAGS) -o $@ $<

$(BIN)/pointers: src/08_pointers/pointers.c | dirs
	$(CC) $(CFLAGS) -o $@ $<

$(BIN)/structs: src/09_structs/structs.c | dirs
	$(CC) $(CFLAGS) -o $@ $<

$(BIN)/file_io: src/10_files/file_io.c | dirs
	$(CC) $(CFLAGS) -o $@ $<

$(BIN)/malloc_recursion_args: src/11_advanced/malloc_recursion_args.c | dirs
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -rf $(BIN)
