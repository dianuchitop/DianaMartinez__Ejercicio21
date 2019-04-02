#MARCHA ALEATORIA EN DOS DIMENSICONES
#C++
# X Y Y VARIABLES Y VA A DAR 1000 PASOS. CADA PASO ES DE TAMAÑO 1. 
#DEBE IMPRIMIR LAS POSICIONES

#include <iostream>
#include <fstream>
#include <random>
#include <stdlib.h>
using namespace std;

int Nit = 1000;
int i,j,k = 0 ;
double x = 0;
double y = 0;
ofstream myfile;

int main(){





myfile.open("walk.txt");
if (myfile.is_open())
    {   
    for(i=0;i<Nit;i++){
     myfile << x<<" "<<y<<"\n";
     double rx = 2 * ((double) rand() / (RAND_MAX)) - 1;
     double ry = 2 * ((double) rand() / (RAND_MAX)) - 1;
     double normapaso = sqrt(pow(rx,2) + pow (ry,2));
     x=x+(rx/normapaso);
     y=y+(ry/normapaso);
    }
        
    }
myfile.close();

return 0;



}
