#include <iostream>
using namespace std;
#define n 20
template<typename T>
void sort(T arr[],int size)
{
for (int i=0;i<size;i++)
 {
     for(int j=i+1;j<size;j++)
     {
         if(arr[i]>arr[j])
         {
             T temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
         }

     }
 }

   cout<<"sorted array:"<<endl;
   for(int i=0;i<size;i++)
    {
     cout<<arr[i]<<" ";
    }
 }

int main()
{
    int size;
    cout<<"enter size:";
    cin>>size;
    int arr1[size];
    float arr2[size];
    cout<<"Enter the elements in integer array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr1[i];
    }
    sort <int>(arr1,size);
    cout<<endl;

    cout<<"Enter the elements in floating point array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr2[i];
    }
    sort <float>(arr2,size);
    
    return 0;
}