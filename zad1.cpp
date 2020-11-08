#include <iostream>
#include <ctime> //biblioteka do inicjalizacji randomowych liczb..



using namespace std;






int main(){

int array[10]{};
int j;

srand( time( NULL ) ); // ziarno do randomowych liczb..

for( int i = 0; i < 10; i++ )
    {
        for ( int j = 1; j < 10; j++){
        
    array[i] = (( rand() % 100 ) + 1 );

        cout << j << " Wylosowana liczba: " << array[i] << endl;
    }
}

return 0;
}

