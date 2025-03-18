#include<stdio.h>
#include<limits.h>
int main(){
    int number;
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    int mx = INT_MIN;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(mx<arr[i]) mx = arr[i];
    }
    int mn = INT_MAX;
    for(int i=0;i<n;i++){
        if(mn>arr[i]) mn = arr[i];
    }
    printf("%d",mx);
    printf("%d",mn);
}