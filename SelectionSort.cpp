#include<iostream>
using namespace std;
void PrintArr(int arr[],int arrLength)
{
    for(int i=0;i<arrLength;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void SelectionSort(int arr[],int arrLength)
{
    for (int i = 0; i < arrLength-1; i++)
    {
        int minIndex=i;
        for (int j = i+1; j <arrLength ; j++)
        {
            if (arr[minIndex]>arr[j])
            {
                minIndex=j;
            }            
        }
        if(minIndex!=i)
        swap(arr[i],arr[minIndex]);
    }
    
}
int main()
{
      int arr[] = { 12, 11, 13, 5, 6 };
    int arrLength=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array:";
    PrintArr(arr,arrLength);
    SelectionSort(arr,arrLength);
    cout<<"Sorted Array:";
    PrintArr(arr,arrLength);
}