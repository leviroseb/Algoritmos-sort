#include<iostream>
#include<stdlib.h>
using namespace std;


void crear_arreglo(int[],int);
void mostrar_arreglo(int[],int);
void insertion(int[],int);
int main()
{
    int v[10],n;
    cout<<"numero de elementos del arreglo: ";
    cin>>n;
    crear_arreglo(v,n);
    mostrar_arreglo(v,n);
    cout<<endl;
    cout<<"El arreglo ordenado es: "<<endl;
    insertion(v,n);
    mostrar_arreglo(v,n);

}


void crear_arreglo(int v[], int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<"numero?...: ";
        cin>>v[i];
    }
}

void mostrar_arreglo(int v[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<v[i];
    }
}

void insertion(int v[], int n)
{
    int key,k;
    for(int i=0;i<n;i++)
    {
        key=v[i];
        k=i-1;

        while(k>=0&&v[k]>key)
        {
            v[k+1]=v[k];
            k=k-1;
        }

        v[k+1]=key;
    }
}
