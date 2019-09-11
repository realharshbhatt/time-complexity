#include<iostream>
#include<time.h>
#include<windows.h>
#define Size 100
using namespace std;
void merge(int [],int,int,int);
void merge_sort(int [],int,int);

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
	merge_sort(a,0,n-1);
	Sleep(25);
	end=clock();
	runtime=(float)(end-start)/CLOCKS_PER_SEC;
	cout<<"\nSorted array:"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\nRuntime:"<<runtime<<endl;
	return 0;
}
void merge(int arr[], int beg, int mid, int end)
{
    int i=beg, j=mid+1, index=beg, temp[Size], k;
    while((i<=mid) && (j<=end))
    {
        if(arr[i] < arr[j])
        {
            temp[index] = arr[i];
            i++;
        }
        else
        {
            temp[index] = arr[j];
            j++;
        }
        index++;
    }
    if(i>mid)
    {
        while(j<=end)
        {
            temp[index] = arr[j];
            j++;
            index++;
        }
    }
    else
    {
        while(i<=mid)
        {
            temp[index] = arr[i];
            i++;
            index++;
        }
    }
    for(k=beg;k<index;k++)
        arr[k] = temp[k];
}
void merge_sort(int arr[], int beg, int end)
{
    int mid;
    if(beg<end)
    {
        mid = (beg+end)/2;
        merge_sort(arr, beg, mid);
        merge_sort(arr, mid+1, end);
        merge(arr, beg, mid, end);
    }
}
