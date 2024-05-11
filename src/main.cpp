#include <iostream>
#include <string>
#include <chrono>
#include <thread>

#include <Inicio.hpp>
using namespace std;

int main(int argc, char const *argv[])
{
    Inicio Menu;
    int i= 1;
    while(i<=14)
    {
        Menu.MostrarMenu(i);
        this_thread::sleep_for(0.2s);
        i++;
    }
    for(int o=0;o<2;o--){
        Menu.LoopMenu(o);
        o++;
        this_thread::sleep_for(0.2s);
        Menu.LoopMenu(o);
        this_thread::sleep_for(0.2s);
    }
}