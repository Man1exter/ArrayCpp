
#include <conio.h>
#include <stdio.h>
#include <math.h>



const int LW = 20, LK = 30;
char tab[LW][LK]; 

// tablica globalna

void pokaz_tab(){



(x-13)​2​ + (y-10)​2​ <= 64;

y < 1.15 * x;


}
void rozwiazanie_tab();






int main(){
    



    rozwiazanie_tab();
    pokaz_tab();
    


    getch();
    



    return 0;
    }
    
    
    void rozwiazanie_tab(){


        int nierownosc1, nierownosc2;

        for (int y = 0; y < LW; y++)

        for (int x = 0; x < LK; x++){

            nierownosc1=(pow(x-13.0,2.0)+pow(y-10.0,2.0) <= 64);
            nierownosc2=(y<1.15*x);


            if(nierownosc1 && nierownosc2) tab[y][x] = '#';

            else tab[y][x]='+';


            }
            }



// Funkcja    ​rozwiazanie_tab() ​   sprawdza za pomocą instrukcji warunkowej, czy dla danej pary ​x,y spełnione są obie nierówności jednocześnie.

// Rozszerz program o funkcję ​pokaz_tab()​, która wyświetla na ekranie komputera rozwiązanieukładu nierówności. ​Wyświetlanie elementu tablicy wykonaj za pomocą instrukcji ​printf("%2c",tab[y][x]);