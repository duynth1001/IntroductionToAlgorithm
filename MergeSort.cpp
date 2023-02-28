#include<iostream>
using namespace std;
void MergeSort(int arr[],int arrLength)
{
    for(int j=1;j<arrLength;j++)
    {
        int key=arr[j];
        int i=j-1;
        while(i>=0&&arr[i]>key)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;

    }
}
void PrintArr(int arr[],int arrLength)
{
    for(int i=0;i<arrLength;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int arrLength=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array:";
    PrintArr(arr,arrLength);
    MergeSort(arr,arrLength);
    cout<<"Sorted Array:";
    PrintArr(arr,arrLength);
}