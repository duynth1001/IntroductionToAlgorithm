#include<iostream>
using namespace std;
int LinearSearch(int arr[],int arrLength,int v)
{
    for(int i=1;i<arrLength;i++)
    {
        if (v==arr[i])
        {
            return i;
        }        
    }
    return -1;
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
    cout<<LinearSearch(arr,arrLength,13);
    
}