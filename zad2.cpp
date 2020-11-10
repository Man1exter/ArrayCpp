#include <iostream>



using namespace std;



void przejscie(int* arr, int number, int rightMove) {

  rightMove = (rightMove + number) % number;

  int index = 0, buf = arr[0]; // jako przejscia na miejsce 0 w tablicy..

  do {
    int poz = (index + rightMove + number) % number;
    swap(buf, arr[poz]);
    index = poz;
  }
   while (index != 0);

}



int main(){

int number, k;

  cout << "Podaj ile elementow ma mieć podana tablica:  ";
  cin >> number;

  cout << "Podaj elementy tablicy: " << endl;
  int* arr = new int[number];

  for (int i = 0; i < number; i++)
    cin >> arr[i];

  cout << "Przesuniecia o: ";
  cin >> k;


  przejscie(arr, number, k);

  for (int i = 0; i < number; i++)
    cout << arr[i] << " ";



    return 0;
}

// 1. element w tablicy zajmuje miejsce sasiada w prawo,
// 2. ostatni element zajmuje miejsce zerowe (przesuniecie),
// 3. trzy instrukcje niżej .. . .. . . . .. . . . .  buf,
// 4. buf ostatni przejsciowy eleement tablicy,



// cyklicznosc podpowiedz o K w prawo

//int buf=tab[r-1];
//for (int j=r-1; j>0;j--) tab[j]=tab[j-1];
//tab[0]=buf;