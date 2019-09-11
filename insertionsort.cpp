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
	for(int i=1;i<n;i++)
	{
		int temp=a[i];
		for(int j=i-1;j>=0;j--)
		{
			if(temp<a[j])
			{
				a[j+1]=a[j];
				a[j]=temp;
			}
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
