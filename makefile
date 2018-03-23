RUN: main.o Heroe.o Adulto.o Joven.o Bumeran.o ArcoYFlechas.o Bombas.o Item.o Monstruos.o
	g++ main.o Heroe.o Adulto.o Joven.o Bumeran.o ArcoYFlechas.o Bombas.o Item.o Monstruos.o -o RUN


main.o: main.cpp Heroe.h Adulto.h Joven.h Bumeran.h ArcoYFlechas.h Bombas.h Item.h Monstruos.h
	g++ -c main.cpp

Heroe.o: Heroe.h Heroe.cpp Item.h Monstruos.h
	g++ -c Heroe.cpp

Adulto.o: Adulto.cpp Adulto.h Heroe.h Item.h
	g++ -c Adulto.cpp

Joven.o: Joven.cpp Joven.h Heroe.h
	g++ -c Joven.cpp

Bumeran.o: Bumeran.cpp Bumeran.h Item.h
	g++ -c Bumeran.cpp

ArcoYFlechas.o: ArcoYFlechas.cpp ArcoYFlechas.h Item.h
	g++ -c ArcoYFlechas.cpp

Bombas.o: Bombas.cpp Bombas.h Item.h
	g++ -c Bombas.cpp

Monstruos.o: Monstruos.cpp Monstruos.h
	g++ -c Monstruos.cpp
