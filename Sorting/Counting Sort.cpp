//        Abu Toha Md Faisal
//        @atmfaisal
//        faisal2408rcc@gmail.com
//
//        Algorithm: Counting Sort
//
//        Counting sort works by creating an auxiliary array the size of the range of values,
//        the unsorted values are then placed into the new array using the value as the index.
//        The auxiliary array is now in sorted order and can be iterated over to construct the sorted array.
//
//        Best Case Time Complexity: O(n+k) where n is the number of elements in input array and k is the range of input
//        Auxiliary Space: O(n+k)

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define MOD 1000000007

bool flag;
int n,i,j,mxm;

int main()
{
        cin >> n;
        int arr[n+8];
        int sorted[n+8];

        mxm = 0;
        for(i=0; i<n; i++)
        {
                cin >> arr[i];
                mxm = max(mxm,arr[i]);
        }

        int Count[mxm+1];
        memset(Count, 0, sizeof(Count));
        for(i=0; i<n; i++)
        {
                Count[ arr[i] ]++;
        }

        for(i=1; i<=mxm; i++)
        {
                Count[i] += Count[i-1];
        }

        for(i=0; i<n; i++)
        {
                sorted[Count[arr[i]-1]] = arr[i];
                Count[arr[i]-1]--;
        }

        for(i=0; i<n; i++)
        {
                cout<<sorted[i]<<" ";
        }
        cout<<endl;
    return 0;
}
