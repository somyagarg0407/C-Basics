#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value elements in array: ");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int low=0;
    int high=n-1;
    int missing;

    while(high>low){
        int mid=(high+low)/2;
        if(arr[mid]!=mid+1){
            high=mid-1;
        }

        else{
            low=mid+1;
        }
        missing=arr[mid]+1;
    }

    printf("Missing elements is: %d",missing);
    return 0;
}