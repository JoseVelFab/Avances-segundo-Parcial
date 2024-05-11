#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <Dibujo.hpp>
#include <thread>

using namespace std;

class Inicio
{
private:
    /* data */
public:
    Inicio(){}
    void MostrarMenu(int Fotograma){
        Dibujo Inicio("./assets/images/PantallaInicio copy " + to_string(Fotograma) + ".txt");
        Inicio.Dibujar(150,15);
    };
    void LoopMenu(int Fotograma){
        Dibujo Inicio("./assets/images/PantallaInicio" + to_string(Fotograma)+ ".txt");
        Inicio.Dibujar(150,15);
    }
    
    ~Inicio() {}
};