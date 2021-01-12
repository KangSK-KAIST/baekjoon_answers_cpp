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
	1065 \
	1110 \
	1152 \
	1157 \
	1316 \
	1330 \
	1546 \
	2438 \
	2439 \
	2557 \
	2562 \
	2588 \
	2675 \
	2741 \
	2742 \
	2753 \
	2884 \
	2908 \
	2941 \
	3052 \
	4344 \
	4673 \
	5622 \
	8393 \
	8958 \
	9498 \
	10171 \
	10172 \
	10430 \
	10718 \
	10809 \
	10818 \
	10869 \
	10871 \
	10950 \
	10951 \
	10952 \
	10998 \
	11021 \
	11022 \
	11720 \
	11654 \
	14681 \
	15552

answers=$(addprefix $(OUT_O_DIR)/,$(problems))

all: $(answers)

$(OUT_O_DIR)/%: $(IN_CPP_DIR)/%.cpp
	mkdir -p $(OUT_O_DIR)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OUT_O_DIR)