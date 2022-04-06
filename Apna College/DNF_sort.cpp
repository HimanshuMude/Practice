#include<iostream>
#include<vector>
using namespace std;

void dnfsort(int arr[],int n)
{
    int low=0,high=n-1,mid=0;
    while(mid!=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==2)
        {
            swap(arr[mid],arr[high]);
            high--;
            mid++;
        }
    }

    

    
}


int main()
{
    int v[]={1,1,2,0,0,1,2,2,1,0};

    dnfsort(v,10);

    for(int i=0;i<10;i++)
    {
        cout<<v[i]<<" ";
    }

    
    return 0;
    

}