#include <iostream>
#include <cstdlib>



using namespace std;






int main(){


char zdanie[200];             // ograniczenie do 200 znakow
int liczenie[123] = {};       // duze i male 122 najwieksze + 1 = 123..

int i = 0; // index w tablicy;


cout << "Podaj zdanie ktore zostanie zliczone na znaki: " << endl;
cin >> zdanie;


while(zdanie[i])
{

liczenie[zdanie[i]]++;

i++;

}


for(int i = 97; i < 123; i++){        
                                             // male liter 97 - 122 ------- duze liter 65 - 90 // +1 jako miejsce zerowe'
    if( liczenie[i] ){

        cout << "znak: " << (char)i << " wystepuje: " << liczenie[i] << " razy" << endl;
    }
}

        

for(int i = 65; i < 91; i++){      
                                             // male liter 97 - 122 ------- duze liter 65 - 90 // +1 jako miejsce zerowe'
    if( liczenie[i] ){
        
        cout << "znak: " << (char)i << " wystepuje: " << liczenie[i] << " razy" << endl;
    }
}

        
        return 0;

}
    

