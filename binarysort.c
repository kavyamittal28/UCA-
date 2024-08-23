#include <stdio.h>
int main(){
    int n;
    printf("Print number of inputs ");
    scanf("%d",&n);

    //array input
    printf("enter your inputs followed by a space - ");
    int a[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }

    //target value input
    int target;
    printf("enter target value ");
    scanf("%d",&target);



//bubble sort
for(int i=0 ; i<n ; i++){
    for(int j=i ; j<n ; j++){
        if(a[i]>a[j]){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}




//binary search

    int start=0;
    int end=n-1;
    int mid=start + (end-start) / 2;
    int found = 0;
    while (start<=end)
    {
        mid=start + (end-start) / 2;
        if (a[mid]==target) found=2;break;
        if (a[mid]>target) end = mid;
        if (a[mid]<target) start = mid;
    }
    if(found=2) printf("found");
    else printf("not found");
    
}