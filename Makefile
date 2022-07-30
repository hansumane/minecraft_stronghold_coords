SRC=main.cpp
BIN=stronghold_coords
CPP=clang++
FLAG=-lm -Os

$(BIN): $(SRC)
	$(CPP) $(SRC) $(FLAG) -o $@

clean:
	rm -f $(BIN)
