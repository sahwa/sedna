CXX=g++

IDIR=include
CFLAGS=-I$(IDIR) -lX11 -lGL -lpthread -lpng -lstdc++fs -std=c++17

_DEPS = olcPixelGameEngine.h nbody.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o nbody.o circular.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

SRC=src

BIN=bin

ODIR=obj

$(ODIR)/%.o: $(SRC)/%.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(BIN)/sedna: $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ $(BIN)/*
