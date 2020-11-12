#include <iostream>



using namespace std;



void przeciwne(int* arr, int liczby, int przeciwna){

przeciwna = arr[i];

cout << "Przeciwne liczby to: " << przeciwna << endl;
}







int main(){

             int liczby;

cout << "Podaj ile liczb ma miec tablica: " << endl;
cin >> liczby;

cout << "Podaj liczby do tablicy: " << endl;

int* arr = new int[liczby];

for(int i = 0; i < liczby; i++)

cin >> arr[i];

    return 0;
}


// tablica ze znakami (liczbami)
// procedura przepisuje z tablicy do tablicy z innymi znakami (liczbami , -)