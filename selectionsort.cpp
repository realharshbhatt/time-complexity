#include<iostream>
#include<time.h>
#include<windows.h>
#define Size 100
using namespace std;

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
	for(int i=0;i<n;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
				min = j;
		}
		if(min!=i)
		{
			int t=a[i];
				a[i]=a[min];
				a[min]=t;
		}
	}
	Sleep(25);
	end=clock();
	runtime=(float)(end-start)/CLOCKS_PER_SEC;
	cout<<"\nSorted array:"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\nRuntime:"<<runtime<<endl;
	return 0;
}
