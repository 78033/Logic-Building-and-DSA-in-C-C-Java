#include<stdio.h>
#include<stdlib.h>


void Increment(int arr[], int iSize){
    for(int i = 0; i < iSize; i++){
        arr[i]++;
    }
}


int main(){

    int *brr = NULL;
    int iCount = 0, iRet = 0;

    printf("Enter number of elements that you want to enter: \n");
    scanf("%d", &iCount);

    brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements: \n");
    for(int i = 0; i < iCount; i++){
        scanf("%d",&brr[i]);
    }

    Increment(brr, iCount);
    printf("Data after updation is: \n");
    for(int i = 0; i < iCount; i++){
        printf("%d\n",brr[i]);
    }

    free(brr);

    return 0;
}