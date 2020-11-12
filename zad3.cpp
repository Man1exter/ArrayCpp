#include <iostream>
#include <functional>



using namespace std;



void przeciwne(int* arr, int liczby){



cout << "Przeciwne liczby to: " << przeciwnaLiczba << endl;
}







int main(){

             int liczby;

cout << "Podaj ile liczb ma miec tablica: " << endl;
cin >> liczby;

cout << "Podaj liczby do tablicy: " << endl;

int* arr = new int[liczby];

for(int i = 0; i < liczby; i++)

cin >> arr[i];


przeciwne(arr,liczby);



    return 0;
}


// tablica ze znakami (liczbami)
// procedura przepisuje z tablicy do tablicy z innymi znakami (liczbami , -)