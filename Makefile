CC:=g++
CFLAGS:=-g -Wall -Werror
IN_CPP_DIR:=src
OUT_O_DIR:=build

problems=1000 \
	1001 \
	1002 \
	1003 \
	15552

answers=$(addprefix $(OUT_O_DIR)/,$(problems))

all: $(answers)

$(OUT_O_DIR)/%: $(IN_CPP_DIR)/%.cpp
	mkdir -p $(OUT_O_DIR)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OUT_O_DIR)