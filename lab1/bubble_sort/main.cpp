#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}


int main() {
   int arr[]={7 , -1 , 8 , 9 , 4};
    bubbleSort(arr , 5);
    for (int i = 0; i < 5; i++) {
        cout<<arr[i]<<" ";
    }
}
