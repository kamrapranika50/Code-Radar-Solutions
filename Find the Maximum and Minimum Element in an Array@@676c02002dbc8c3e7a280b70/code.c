#include<stdio.h>
#include<limits.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",arr[i]);
    }
    int mx = INT_MAIN;
    for(int i=1;i<n;i++){
        if(mx<arr[i]) mx = arr[i];
    }
    printf("%d",mx);



}