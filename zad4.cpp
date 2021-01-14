#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>


using namespace std;





const int LW = 20, LK = 30;

char tab[LW][LK];         // tablica globalna tab[x][y]




void pokaz_tab( int &nierownosc1,int &nierownosc2){

// int nierownosc1, nierownosc2;

cout << nierownosc1 << endl;
cout << nierownosc2 << endl;


}



void rozwiazanie_tab(){

    int nierownosc1, nierownosc2;


        for (int y = 0; y < LW; y++){

        for (int x = 0; x < LK; x++){

            nierownosc1 = (pow(x - 13.0,2.0) + pow(y - 10.0,2.0) <= 64);
            nierownosc2 = (y < 1.15 * x);


            if(nierownosc1 && nierownosc2) 
            tab[y][x] = '#';

             else 
            tab[y][x] = '+';
              
            }
        }
}



int main(){
    
 int nierownosc1, nierownosc2;

    rozwiazanie_tab();

    pokaz_tab(nierownosc1,nierownosc2);
    

    getch();
    
    return 0;
}

    
    