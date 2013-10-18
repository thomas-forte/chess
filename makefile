all: final

final: chess.cpp output.h dataTypes.h
	g++ chess.cpp -o chess
 
clean:
	rm chess
