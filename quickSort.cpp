#include <iostream>	
#include <fstream>
#include <ctime>	
#include <cstdlib>	
using namespace std;

void swap(int* a, int *b)
{
  int aux=*a;
  *a=*b;
  *b=aux;
}


int particion(int arr[], int low, int high)
{
  int pivot=arr[high];
  int i=(low-1);
  for(int j=low;j<=high-1;j++)
  {
    if(arr[j]<=pivot)
    {
      i++;
      swap(&arr[i],&arr[j]);
    }

  
  }

  swap(&arr[i+1],&arr[high])
  return i+1;
}


void quicksort(int arr[],int low,int high)
{
  if(low<high)
  {
    int pi=particion(arr, low, high);
    quicksort(arr,low,pi-1);
    quicksort(arr, pi+1,high);
  }
}

void imprimirArray(int arr[], int n)
{
  int i;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i];
  }
}


int main()
{
  int arr[]={10,7,8,9,1,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  quicksort(arr,0,n-1);
  return 0;
}

