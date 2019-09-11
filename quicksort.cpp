#include<iostream>
#include<time.h>
#include<windows.h>
#define Size 100
using namespace std;
void quicksort(int [],int,int);

int main()
{
	clock_t start,end;
	float runtime;
	int a[Size],n;
	cout <<"Enter value of n:";cin>>n;
	cout <<"\nEnter the elements\n";
	for(int i=0;i<n;i++)
        cin>>a[i];
	start=clock();
	quicksort(a,0,n-1);
	Sleep(25);
	end=clock();
	runtime=(float)(end-start)/CLOCKS_PER_SEC;
	cout<<"\nSorted array:"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\nRuntime:"<<runtime<<endl;
	return 0;
}
void quicksort(int arr[], int low, int high)
{
  int pivot, i, j, temp;
   if(low < high)
    {
    pivot = low;i = low;j = high;
    while(i < j)
     {
      while(arr[i] <= arr[pivot] && i <= high)
        i++;
      while(arr[j] > arr[pivot] && j >= low)
        j--;
      if(i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
    temp = arr[j];
    arr[j] = arr[pivot];
    arr[pivot] = temp;
    quicksort(arr, low, j-1);
    quicksort(arr, j+1, high);
  }
}
