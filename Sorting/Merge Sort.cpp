//        Abu Toha Md Faisal
//        @atmfaisal
//        faisal2408rcc@gmail.com
//
//        Algorithm: Merge Sort
//
//        Merge Sort follows the rule of Divide and Conquer. But it doesn't divides the list
//        into two halves. In merge sort the unsorted list is divided into N sublists, each
//        having one element, because a list of one element is considered sorted. Then, it
//        repeatedly merge these sublists, to produce new sorted sublists, and at lasts one
//        sorted list is produced.
//
//        Time Complexity: Ο(n log n)
//        Auxiliary Space: O(n)

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void Merging(int arr[], int low, int mid, int high)
{
        int i,j,k,a,b;

        a = mid - low + 1;
        b = high - mid;
        int L[a], R[b];

        for(i=0; i<a; i++) L[i] = arr[low+i];
        for(j=0; j<b; j++) R[j] = arr[mid+j+1];

        i = j = 0;
        k = low;
        while(i<a && j<b)
        {
                if( L[i]<=R[j] )
                        {
                                arr[k] = L[i];
                                i++;
                        }
                else
                        {
                                arr[k] = R[j];
                                j++;
                        }
                k++;
        }
        while(i<a)
        {
                arr[k] = L[i];
                i++; k++;
        }
        while(j<b)
        {
                arr[k] = R[j]; j++; k++;
        }
}

void Merge_sort(int arr[], int low, int high)
{
        if(low<high)
        {
                int mid = low+ (high-low)/2;
                Merge_sort(arr, low, mid);
                Merge_sort(arr, mid+1, high);

                Merging(arr, low, mid, high);
        }
}

int main()
{
        int n,i;
        cin >> n;
        int arr[n+8];

        for(i=0; i<n; i++) cin >> arr[i];

        Merge_sort(arr, 0, n-1);

        for(i=0; i<n; i++)
        {
                cout<<arr[i]<<" ";
        }
        cout<<endl;
    return 0;
}
