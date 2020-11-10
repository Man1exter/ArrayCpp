#include <iostream>



using namespace std;

void przejscie(int* tab, int number, int przes) {

  przes = (przes + number) % number;

  int indeks = 0, temp = tab[0];

  do {
    int poz = (indeks + przes + number) % number;
    swap(temp, tab[poz]);
    indeks = poz;
  }
   while (indeks != 0);

}

int main(){

int number, k;

  cout << "Podaj ile elementow ma mieć podana tablica:  ";
  cin >> number;

  cout << "Podaj elementy tablicy:" << endl;
  int* tab = new int[number];

  for (int i = 0; i < number; i++)
    cin >> tab[i];

  cout << "Przesuniecia o: ";
  cin >> k;


  przejscie(tab, number, k);

  for (int i = 0; i < number; i++)
    cout << tab[i] << " ";



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