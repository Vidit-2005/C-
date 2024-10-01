#include<iostream>
using namespace std;
void bubble(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
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
    bubble(arr,10);
    print(arr,10);    
}