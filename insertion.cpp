#include<iostream>
using namespace std;
void insertion(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int t = arr[i];
        int j=i-1;
        while(j>=0 && t<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=t;
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
    insertion(arr,10);
    print(arr,10);    
}