#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[] , int n ){
    int mn;
   for(int i=0 ; i<n-1 ; i++){
        mn=i;
    for(int j=i+1 ; j<n ; j++){
        if(arr[mn]>arr[j])
           mn=j;
    }
      if(mn!=i)
        swap(arr[mn] , arr[i]);
   }
}

int main()
{
	int arr[5]={2 , 9 , 4 , 3 , -1};
	selectionSort(arr , 5);
	for(int i=0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
}
