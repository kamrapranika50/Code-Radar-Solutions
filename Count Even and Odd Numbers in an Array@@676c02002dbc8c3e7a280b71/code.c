#include <stdio.h>
int main(){
    int arr[];
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    int count1 = 0;
    if(arr[i] %2 == 0){
        count++;
    }
    else{
        count1++;
    }
    printf("%d",count);
    printf(" %d",count1);
    return 0;
}