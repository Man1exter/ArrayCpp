#include<iostream>
#include<cstdlib>



using namespace std;


 
void przeciwny(int tab[])
{
        for(int i = 0; i < 10; i++)
                tab[i] *= (-1); 
}
 




int main()
{
        
        int array[10] = {1, 5, 8, 22, 61, 17, 11, 15, 10, 87}; 
        
        cout << endl;
        
        for(int i = 0; i < 10; i++)
                cout<< array[i] <<" ";
        
        cout << endl; 
        cout << endl; 
        
        
        przeciwny(array); 
        
        
        for(int i = 0; i < 10; i++)
                cout<< array[i] <<" ";
        
        cout << endl;
        cout << endl;
        
        
        return 0;
}


