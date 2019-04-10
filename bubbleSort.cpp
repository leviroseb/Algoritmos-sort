#include<iostream>
#include<stdlib.h>
using namespace std;

void crear_vector(int[], int);
void mostrar_vector(int[], int);
void ordenar(int[], int);
void mostrar_ordenado(int[], int);

int main()
{
    int v[100], n;
    cout<<"Ingrese el numero de elementos del vector: ";
    cin>>n;
    crear_vector(v,n);
    mostrar_vector(v,n);
    ordenar(v,n);
    cout<<endl;
    cout<<"El vector ordenado es: "<<endl;
    mostrar_vector(v,n);
}


void crear_vector(int v[], int n)
{
	for (int i=0; i<n;i++)
		{cout<<"Ingrese un numero: ";
		cin>>v[i];}
}

void mostrar_vector(int v[], int n)
{
	for (int i=0;i<n;i++)
		cout<<v[i];
}


void ordenar(int v[], int n)
{
	int aux;
	for (int j=0;j<n;j++)
        {for(int i=0;i<n;i++)
            {aux=v[i];
            if(v[i]>=v[i+1])
                {v[i]=v[i+1];
                v[i+1]=aux;}}}

}
