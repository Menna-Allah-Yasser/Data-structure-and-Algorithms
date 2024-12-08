#include <bits/stdc++.h>
using namespace std;

int linear_search(int arr[] , int size , int target){
    for(int i=0 ; i<size ; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int binary_search(int arr[] ,int size , int target ){
    sort(arr , arr+size);
    int l , r , mid;
    l=0;
    r=size-1;
    while(l<=r){
        mid=(l+r)/2;
        if(arr[mid]==target)
            return mid;
        else if(arr[mid]>target)
            r=mid-1;
        else
            l=mid+1;
    }
    return -1;

}

int linear_search(char *ptr ,int size , char target ){
    for(int i=0 ; i<size ; i++){
        if(ptr[i]==target){
            return i;
        }
    }
    return -1;
}

int binary_search(char *ptr ,int size , char target ){
    int l , r , mid;
    l=0;
    r=size-1;
    while(l<=r){
        mid=(l+r)/2;
        if(ptr[mid]==target)
            return mid;
        else if(ptr[mid]>target)
            r=mid-1;
        else
            l=mid+1;
    }
    return -1;

}


int main() {

    char *ptr="menna";
    cout<<linear_search(ptr , 5 ,'m');
}
