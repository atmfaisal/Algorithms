//        Abu Toha Md Faisal
//        @atmfaisal
//        faisal2408rcc@gmail.com
//
//        Algorithm: Bubble Sort
//
//        The algorithm works by comparing each item in the list with the item next to it,
//        and swapping them if required. In other words, the largest element has bubbled
//        to the top of the array. The algorithm repeats this process until it makes a pass
//        all the way through the list without swapping any items.
//
//        Worst and Average Case Time Complexity: O(n^2).
//        Best Case Time Complexity: O(n). [when array is already sorted]
//        Auxiliary Space: O(1)


#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
        int i, j;
        for(i=0; i<n-1; i++)
        {
                for(j=0; j<n-i-1; j++)
                {
                        if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
                }
        }
}

int main()
{
        int arr[] = {6,5,4,3,2,1};
        int n = sizeof(arr)/sizeof(arr[0]);

        bubbleSort(arr, n);

        cout << "Sorted Array" <<endl;
        for(int i=0; i<n; i++)
        {
                cout<< arr[i] <<" ";
        }
        return 0;
}
