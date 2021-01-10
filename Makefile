CC:=g++
CFLAGS:=-g -Wall -Werror --std=c++17
IN_CPP_DIR:=src
OUT_O_DIR:=build

problems=\
	1000 \
	1001 \
	1002 \
	1003 \
	1008 \
	1330 \
	2557 \
	2588 \
	2753 \
	2884 \
	9498 \
	10171 \
	10172 \
	10430 \
	10718 \
	10869 \
	10998 \
	14681 \
	15552

answers=$(addprefix $(OUT_O_DIR)/,$(problems))

all: $(answers)

$(OUT_O_DIR)/%: $(IN_CPP_DIR)/%.cpp
	mkdir -p $(OUT_O_DIR)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OUT_O_DIR)