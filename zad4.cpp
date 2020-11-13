#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>


using namespace std;





const int LW = 20, LK = 30;

char tab[LW][LK];         // tablica globalna tab[x][y]




void pokaz_tab(){

int nierownosc1, nierownosc2;


cout << *tab << endl;
cout << *tab << endl;


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


    pokaz_tab();
    

    getch();
    
    return 0;
    }

    
    