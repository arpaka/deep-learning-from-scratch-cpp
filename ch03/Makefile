CXX      = g++
CXXFLAGS = -std=c++14 -g -Wall -Wextra
INCLUDES = -Iinclude \
-I/usr/local/include/xtensor-blas/flens

TGTS   = `ls test/test_*.cc | sed -e s/.cc//`
TGT   ?= test/test_nn_3layers
#TGT  ?= test/test_relu
#TGT  ?= test/test_xtensor
#SRCS  = src/relu.cc
SRCS += $(TGT).cc
BIN   = $(TGT)
OBJS  = $(SRCS:.cc=.o)
LIBS  =

all: compile_all

compile: $(BIN)

compile_all:
	@for target in $(TGTS); do \
	make TGT=$${target} compile; \
	done

test: $(BIN)
	./$(BIN)

test_all:
	@for target in $(TGTS); do \
	make TGT=$${target} test; \
	done

$(BIN): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(OBJS) -o $@ $(LIBS)

.cc.o: $(SRCS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(BIN) $(OBJS)

clean_all:
	@for target in $(TGTS); do \
	make TGT=$${target} clean; \
	done

.PHONY: all compile compile_all test test_all clean clean_all
