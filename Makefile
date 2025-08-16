# Makefile to build lesson programs (src/) and learn-by-example programs (examples/)

CC := clang
CFLAGS := -std=c11 -Wall -Wextra -Wpedantic -Wconversion -Wshadow -O0 -g
LDFLAGS :=

BIN_DIR := bin

# Core (lesson) programs under src/
CORE_BINS := \
	$(BIN_DIR)/hello_world \
	$(BIN_DIR)/variables \
	$(BIN_DIR)/operators \
	$(BIN_DIR)/control_if_switch \
	$(BIN_DIR)/loops \
	$(BIN_DIR)/functions \
	$(BIN_DIR)/arrays \
	$(BIN_DIR)/strings \
	$(BIN_DIR)/pointers \
	$(BIN_DIR)/structs \
	$(BIN_DIR)/file_io \
	$(BIN_DIR)/malloc_recursion_args

# Examples under examples/
EX_DIR := examples
EX_BIN_DIR := $(BIN_DIR)/examples
EX_SOURCES := $(wildcard $(EX_DIR)/*.c)
EX_BINS := $(patsubst $(EX_DIR)/%.c,$(EX_BIN_DIR)/%,$(EX_SOURCES))

.PHONY: all core examples clean list-examples ex-% run-%

all: core examples

core: $(BIN_DIR) $(CORE_BINS)

examples: $(EX_BIN_DIR) $(EX_BINS)

$(BIN_DIR):
	@mkdir -p $(BIN_DIR)

$(EX_BIN_DIR):
	@mkdir -p $(EX_BIN_DIR)

# Core build rules
$(BIN_DIR)/hello_world: src/01_intro/hello_world.c | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
$(BIN_DIR)/variables: src/02_basics/variables.c | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
$(BIN_DIR)/operators: src/03_operators/operators.c | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
$(BIN_DIR)/control_if_switch: src/04_control_flow/if_switch.c | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
$(BIN_DIR)/loops: src/04_control_flow/loops.c | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
$(BIN_DIR)/functions: src/05_functions/functions.c | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
$(BIN_DIR)/arrays: src/06_arrays/arrays.c | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
$(BIN_DIR)/strings: src/07_strings/strings.c | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
$(BIN_DIR)/pointers: src/08_pointers/pointers.c | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
$(BIN_DIR)/structs: src/09_structs/structs.c | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
$(BIN_DIR)/file_io: src/10_files/file_io.c | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
$(BIN_DIR)/malloc_recursion_args: src/11_advanced/malloc_recursion_args.c | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

# Example build rule pattern
$(EX_BIN_DIR)/%: $(EX_DIR)/%.c | $(EX_BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
	@echo "Built $@"

# Build one example by name: make ex-hello_world
ex-%: $(EX_BIN_DIR)/%

# Run one example by name: make run-hello_world
run-%: $(EX_BIN_DIR)/%
	@$<

list-examples:
	@echo "Examples found:" && ls -1 $(EX_DIR) | sed 's/.c$$//' | sed 's/^/ - /'

clean:
	rm -rf $(BIN_DIR)
	@echo "Cleaned build outputs."
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
