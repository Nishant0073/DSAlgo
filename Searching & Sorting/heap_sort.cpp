#include <bits/stdc++.h>
using namespace std;

void hepify(int arr[],int i,int n)
{
        int largest = i;
        int left = (i*2)+1;
        int right = (i*2)+2;
        if(left<n && arr[left] > arr[largest] )
                largest = left;
        if(right<n && arr[right] > arr[largest])
                largest = right;

        if(largest!=i)
        {
                swap(arr[i],arr[largest]);
                hepify(arr,largest,n);
        }
}

void hp(int arr[],int n)
{
        for(int i=(n/2)-1;i>=0;i--)
        {
                hepify(arr,i,n);
        }
        for(int i=n-1;i>0;i--)
        {
                swap(arr[0],arr[i]);
                hepify(arr,0,i);
        }
        for(int i=0;i<n;i++)
        {
                std::cout << arr[i] << std::endl;
        }
}
int main()
{
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
                cin>>arr[i];

        hp(arr,n);
}
