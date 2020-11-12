#include<iostream>
#include<cstdlib>




using namespace std;
 



void zamiana(int tab[])
{
        for(int i = 0; i < 10; i++){
                tab[i] *= tab[i]; 
        }
}
 




int main()
{
        
        int arr[10] = {0, 3, 4, 3, 6, 7, 11, -5, -10, 87}; 
        
        
        for(int i = 0; i < 10 ; i++)
                cout<<arr[i]<<" ";
        
        cout << endl; 
        
        
        zamiana(arr); 
        
       
        for(int i = 0 ; i < 10 ; i++)
                cout<< arr[i] <<" ";
        
        cout << endl;
        
        
        return 0;
}


// tablica ze znakami (liczbami)
// procedura przepisuje z tablicy do tablicy 
// z innymi znakami (liczbami , -)