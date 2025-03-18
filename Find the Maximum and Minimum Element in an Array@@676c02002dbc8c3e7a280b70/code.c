#include<stdio.h>
#include<limits.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",arr[i]);
    }
    int mx = INT_MIN;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        if(mx<arr[i]) mx = arr[i];
    }
    printf("%d",mx);
    
    int mn = INT_MAX;
    for(int i=1;i<n;i++){
        if(mn<arr[i]) mn = arr[i];
    }
    printf("%d",mn);



}