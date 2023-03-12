#include<iostream>
using namespace std;
void Merge(int arr[],int l,int m,int r)
{
    int subArray1Lenghth=m-l+1;
    int subArray2Length=r-m;
    int *subArray1 = new int[subArray1Lenghth];
    int *subArray2 = new int [subArray2Length];
    for(int i=0;i<subArray1Lenghth;i++)
    subArray1[i]=arr[i+l];
    for(int j=0;j<subArray2Length;j++)
    subArray2[j]=arr[j+m+1];
    int subArray1Index=0, subArray2Index=0, arrayIndex=l;
    while (subArray1Index<subArray1Lenghth&&subArray2Index<subArray2Length)
    {
        if(subArray1[subArray1Index]<=subArray2[subArray2Index])
        {
            arr[arrayIndex]=subArray1[subArray1Index];
            subArray1Index++;
        }
        else
        {
            arr[arrayIndex]=subArray2[subArray2Index];
            subArray2Index++;
        }
        arrayIndex++;
    }
    while (subArray1Index<subArray1Lenghth)
    {
        arr[arrayIndex]=subArray1[subArray1Index];
        arrayIndex++;
        subArray1Index++;
    }
    while (subArray2Index<subArray2Length)
    {
        arr[arrayIndex]=subArray2[subArray2Index];
        arrayIndex++;
        subArray2Index++;
    }
    delete [] subArray1;
    delete [] subArray2;
}
void MergeSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        MergeSort(arr,l,m);
        MergeSort(arr,m+1,r);
        Merge(arr,l,m,r);
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
      int arr[] = { 12, 1, 1, 5, 6 };
    int arrLength=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array:";
    PrintArr(arr,arrLength);
    MergeSort(arr,0,arrLength-1);
    cout<<"Sorted Array:";
    PrintArr(arr,arrLength);

}