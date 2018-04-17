/*
EQUIPO 1 6J

DANIEL GERONIMO CHACON CARRILLO
JOSE LUIS OCON ALVAREZ
ALAN ALBERTO CERNA OLIVARES
*/

#include <iostream>
#include "libreria.h"
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;

    vector<string> list;
    std::ofstream outfile ("test.txt");

    while (n < 1)
    {
        n++;
    
        list.push_back("valor ");
        list.push_back(" resultadoEsperado");
        list.push_back(" resultadoObtenido");
        list.push_back(" veredicto");

        list.push_back("\n");
        list.push_back("100.0          ");
        list.push_back("  HD           ");
        list.push_back(australianToAmerican(100.0));
        list.push_back("            ");
        list.push_back(veredicto("HD", australianToAmerican(100.0)));
        list.push_back("\n");
    }

    for(int i=0; i < list.size();i++)
    {
        outfile<<list[i];
    }

    outfile.close();
}