#pragma once

#include <iostream>

#include <fstream>

#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/string.hpp>
#include <ftxui/screen/terminal.hpp>
#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>

using namespace std;
using namespace ftxui;

class Dibujo
{
private:
    fstream archivo;
    Element contenido;
public:
    Dibujo(string path) 
    {
    archivo.open(path);
    Elements lineas;
    while(!archivo.eof())
    {
        string linea;
        getline(archivo,linea);
        lineas.emplace_back(text(linea));
    }
    this->contenido = vbox(lineas);
    archivo.close();
    }
    void Dibujar(int resolucionx, int resoluciony)
    {
        Element personaje = this->contenido | bold | color(Color::Black) | bgcolor(Color::Yellow1);
        Element lienzo = hbox({personaje});
        auto Pantalla = Screen::Create(Dimension::Fixed(resolucionx),Dimension::Fixed(resoluciony));
        
        Render(Pantalla, lienzo);
        Pantalla.Print();
       
        cout<<Pantalla.ResetPosition();
    }
    ~Dibujo() {}
};