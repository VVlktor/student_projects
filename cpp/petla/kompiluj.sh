#!/bin/sh
rm main
echo "----Kompilacja programu----"
g++ -o main main.cpp
echo "---Kompilacja ukonczona----"
echo "---Uruchamianie programu---"
chmod +x main
./main
echo "---Zakonczono program---"
