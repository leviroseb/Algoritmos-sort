#include<iostream>
#include<stdlib.h>
using namespace std;



void merge(int [], int, int, int);
void mergesort(int [], int , int);

int main()
{
    int v[10],n;
    cout<<"numero de elementos del arreglo: ";
    cin>>n;
    crear_arreglo(v,n);
    mostrar_arreglo(v,n);
    cout<<endl;
    cout<<"El arreglo ordenado es: "<<endl;
    mergesort(v,l,n);
    mostrar_arreglo(v,n);
}




void merge(int v[], int l, int m, int r)
{
    int i,j;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1+1], R[n2+1];
    for(i=0;i<n1;i++)
    {
        L[i]=v[i+l];
    }
    for(j=0;j<n2;j++)
    {
        R[j]=v[m+j+1];
    }

    i=0;j=0;
    L[n1]=100000;
    R[n2]=100000;

    for(int k=l;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            v[k]=L[i];
            i++
        }
        else
        {
            v[k]=R[j];
            j++;
        }
        
    }
}

void mergesort(int v[], int l, int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergesort(v,l,m);
        mergesort(v,m+1,r);
        merge(v,l,m,r)M
    }
}