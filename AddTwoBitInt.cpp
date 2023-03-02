#include<iostream>
using namespace std;
void inputArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void printArr(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void AddTwoBitInt(int arrA[],int arrB[],int arrC[],int n)
{
    for (int i = n-1; i>=0 ; i--)
    {      
        if(arrA[i]+arrB[i]+arrC[i+1]>=2)
        {
            arrC[i]+=1;
            if (arrA[i]+arrB[i]+arrC[i+1]==2)
            {
                arrC[i+1]=0;
            }
            else
            {
                arrC[i+1]=1;
            }
        }
        else
        {
            arrC[i+1]=arrA[i]+arrB[i]+arrC[i+1];
        }
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arrA[n];
    int arrB[n];
    int arrC[n+1]={0};
    inputArr(arrA,n);
    inputArr(arrB,n);
    AddTwoBitInt(arrA,arrB,arrC,n);
    printArr(arrC,n+1);
    return 0;
}