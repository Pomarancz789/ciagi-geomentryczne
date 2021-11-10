#include <iostream>
using namespace std;

void przykładpierwszy()
{
    int tab[10]={0};
    
    tab[0]=2;
    
    for (int i=1; i<10; i++)        //złożonośc = 10, dla n elementów złożoność = n
    {
        tab[i]=tab[i-1]+2;
        cout << tab[i] << endl;
    }

}

int przykladdrugi()
{
    //Algorytm wyznaczania sumy elementów tablicy, czyli sumy ciągu liczb parzystych
 
    int suma=0;
    int tab[10]={0};
    
    tab[0]=2;
    suma+=tab[0];
    
    for (int i=1; i<10; i++)
    {
        tab[i]=tab[i-1]+2;
        suma+=tab[i];
    }
    return suma;
//złożonośc = 10, dla n elementów złożoność = n
}

int przykladtrzeci()
{
    int tab[10]={0};
    int suma=0;
    
    tab[0]=2;
    
    for (int i=1; i<10; i++)
    {
        tab[i]=tab[i-1]+2;
    }
    suma = 10*(tab[0]+tab[9])/2;
    return suma;
//złożoność=3, bo 3 jest stała dla dowolnego n
}

int main()
{
    przykładpierwszy();
    cout << przykladdrugi() << endl;
    cout << przykladtrzeci() << endl;
    
    return 0;
}
