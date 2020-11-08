#include <iostream>
#include <ctime> //biblioteka do inicjalizacji randomowych liczb..



using namespace std;




int main(){

int array[10];

srand( time( NULL ) ); // ,,ziarno'' do randomowych liczb..

for( int i = 0; i < 10; i++ )
    { 

    array[i] = (( rand() % 100 ) + 1 ); // losowanie randomowych liczb..

        cout << "Wylosowana liczba: " << array[i] << endl;
}

   return 0;
}

