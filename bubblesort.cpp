#include<iostream>
#include<time.h>
#include<windows.h>
#define Size 100
using namespace std;

int main()
{
    int a[Size],temp,n;
    clock_t start,end;
    float runtime;
    cout<<"enter the value of n:";cin>>n;
    cout<<"\nenter the elements\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    start=clock();
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    Sleep(25);
    end=clock();
    runtime=(float)(end-start)/CLOCKS_PER_SEC;
    cout<<"Sorted array is:";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\nRUNTIME:"<<runtime;
    return 0;
}
