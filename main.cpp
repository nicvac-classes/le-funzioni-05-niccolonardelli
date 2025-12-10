#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
void ordina (int n, vector<int>v)
{
    int i, j, t;
    bool scambio;
    i=0;
    scambio=true;
    while (i<=n-1 and scambio)
    {
        scambio = false;
        j=0;
        while (j<=(n-2)-i)
        {
            if (v[j] > v[j+1])
            {
                scambio = true;
                t = v[j];
                v[j] = v[j+1];
                v[j+1] = t;
            }
            j= j+1;
        }
        i = i+1;
    }
}
void visualizza (int n, vector<int>v)
{
    int i;
    i=0;
    while (i<n)
    {
        cout  << v[i] << endl;
        i=i+1;
    }
}

void main()
{
    srand(time(0));
    int n, i;
    n=3;
    vector<int>v(n);
    vector<int>w(n);
    for(i=0; i<=n-1; i=i+1)
    {
      v[i] = 1+ rand()%10;
      w[i] = 1+rand()%10;
    }
    ordina(n,v);
    ordina(n,w);
    cout << "vettore v" << endl;
    visualizza(n,v);
    cout << "vettore w" << endl;
    visualizza(n, w);
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
