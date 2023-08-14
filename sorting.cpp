#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    cout << "enter size" << endl;
    cin >> n;
    cout << "enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    /*for(int i=0;i<n-1;i++)           SELECTION SORT
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
        }
    }*/

    /*int count=1;                      BUBBLE SORT
    while(count<n)
    {
        for(int i=0;i<n-count;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;

            }
        }
        count++;
    }*/

    /* for(int i=0;i<n;i++)           INSERTION SORT
     {
         int curr=arr[i];
         int j=i-1;
         while(arr[j]>curr && j>=0)
         {
             arr[j+1]=arr[j];
             j--;
         }
         arr[j+1]=curr;
     }*/

    cout << "after sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}
