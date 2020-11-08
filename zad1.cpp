#include <iostream>
#include <ctime> //biblioteka do inicjalizacji randomowych liczb..



using namespace std;



int maksymalnaWartosc(int array[10], int a)
{
int i;
int max;

max = array[0];     
for( i = 0; i < a ; i++) 
if(array[i] > max) 
max = array[i];
 
return max;
}




int main(){

int array[10];

srand( time( NULL ) ); // ,,ziarno'' do randomowych liczb..

for( int i = 0; i < 10; i++ )
    { 

    array[i] = (( rand() % 100 ) + 1 ); // losowanie randomowych liczb..

        cout << "Wylosowana liczba: " << array[i] << endl;

}

maksymalnaWartosc(array[10]);

   return 0;
}

