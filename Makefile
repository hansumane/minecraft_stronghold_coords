SRC=stronghold_coords.cpp
BIN=out-stronghold_coords
CPP=g++
FLAG=-lm -Os

$(BIN): $(SRC)
	$(CPP) $(SRC) $(FLAG) -o $@

clear:
	rm -f $(BIN)
