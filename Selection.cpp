#include<iostream>
using namespace std;
void selection(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            arr[min]=arr[min]+arr[i];
            arr[i]=arr[min]-arr[i];
            arr[min]=arr[min]-arr[i];
        }
    }
}
void print(int a[],int n)
{
    cout<<"data: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
main()
{
    int arr[10]={5,4,31,1,2,34,5,6,9,8};
    print(arr,10);
    selection(arr,10);
    print(arr,10);    
}