FLAGS=-lportaudio -lncurses -lpthread -std=c++11

play: 01-main.cpp 01-playback.cpp 01-playback.hpp oo_model.cpp
	g++ -oplay 01-main.cpp 01-playback.cpp oo_model.cpp $(FLAGS)

test: play
	echo "Se tudo deu certo, voce deve ouvir dois blips."
	./play


all: model