#include <iostream>
#include <ctime> //biblioteka do inicjalizacji randomowych liczb..
#include <algorithm> //biblioteka do uzycia funkcji sort()..



using namespace std;



void maxWartosc(int array[10], int i)
{
int maxValue;
int a;

maxValue = array[0];     
for( i = 0; i < a ; i++){ 

if(array[i] > maxValue) {

maxValue = array[i];


  }
 }
 cout << "\nNajwieksza wartosc z wylosowanych randomowo liczb to: " << maxValue << endl;
}





void minWartosc(int array[10], int i)
{
int minValue;
int a;

minValue = array[0];     
for( i = 0; i < a ; i++){ 

if(array[i] < minValue) {

minValue = array[i];


  }
 }
 cout << "\nNajmniejsza wartosc z wylosowanych randomowo liczb to: " << minValue << endl;
}






void sortowanie(int array[10], int i)
{

sort(array, array+10);
	
    cout << "\nWysortowane liczby od najmniejszej:\n";
	for(int i = 0; i < 10 ;i++)cout<< array[i]<<" - ";


}






void szukanieEle(int array[10], int i)
{






}





int main(){

int array[10];
int i;

srand( time( NULL ) ); // ,,ziarno'' do randomowych liczb..

for( int i = 0; i < 10; i++ )
    { 

    array[i] = (( rand() % 100 ) + 1 ); // losowanie randomowych liczb..

        cout << "Wylosowana liczba: " << array[i] << endl;

}

maxWartosc(array,i);
minWartosc(array,i);
sortowanie(array,i);
szukanieEle(array,i);


   return 0;
}

