
GPP_OPTS=-Wall -std=c++0x -pedantic

all:
	g++ $(GPP_OPTS) src/main.cpp src/http/*.cpp -Isrc/http -o bin/galewhale
