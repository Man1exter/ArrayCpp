#include <iostream>
#include <string>



using namespace std;






int main(){


char zdanie[101];
int liczenie[123]{};

int index = 0; // index w tablicy;


cout << "Podaj zdanie ktore zostanie zliczone na znaki: " << endl;
cin >> zdanie;


while(zdanie[index])
{

liczenie[zdanie[index]]++;

index++;

}


for(int i = 97; i < 123; i++){        
                                             // male liter 97 - 122 ------- duze liter 65 - 90 // +1 jako miejsce zerowe'
    if(liczenie[index] < 0){

        cout << "Posiadane zdanie ma: " << (char)index << " - " << liczenie[index] << endl;
    }
}

for(int i = 65; i < 91; i++){        
                                             // male liter 97 - 122 ------- duze liter 65 - 90 // +1 jako miejsce zerowe'
    if(liczenie[index] < 0){
        
        cout << "Posiadane zdanie ma: " << (char)index << " - " << liczenie[index] << endl;
    }
}

    return 0;
}





// Napisz program zawierający funkcję zliczającą ilość wystąpień zadanego znaku,
// w podanym przez użytkownika za pomocą klawiatury łańcuchu znaków.