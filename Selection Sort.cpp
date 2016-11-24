//        Abu Toha Md Faisal
//        @atmfaisal
//        faisal2408rcc@gmail.com
//
//        Algorithm: Selection Sort
//
//        The algorithm works by selecting the smallest unsorted item and then swapping it
//        with the item in the next position to be filled.
//
//        The selection sort works as follows: you look through the entire array for the smallest element,
//        once you find it you swap it (the smallest element) with the first element of the array.
//        Then you look for the smallest element in the remaining array (an array without the first element)
//        and swap it with the second element. Then you look for the smallest element in the remaining array
//        (an array without first and second elements) and swap it with the third element, and so on.
//
//        Time Complexity: O(n^2).
//        Auxiliary Space: O(1)


#include<bits/stdc++.h>
using namespace std;

void Selection_Sort(int arr[], int n)
{
        for(int i=0; i<n; i++)
        {
                int mnm = i;
                for(int j=i+1; j<n; j++)
                {
                        if(arr[j]<arr[mnm]) mnm = j;
                }
                swap(arr[i],arr[mnm]);
        }
}

int main()
{
        int arr[] = {6,5,4,3,2,1};
        int n = sizeof(arr)/sizeof(arr[0]);
        Selection_Sort(arr, n);

        cout << "Sorted Array" <<endl;
        for(int i=0; i<n; i++)
        {
                cout<< arr[i] <<" ";
        }
        return 0;
}
