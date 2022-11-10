#include<stdio.h>

int insertionSort(int * a, int n){
    int i,j,k;

    for(j=1;j<n;j++){
        i=j-1;
        k=a[j];
        while((i>=0)&&(a[i]>k)){
            a[i+1]=a[i];
            i--;
        }
    }
    return j;
}

int main(){
    return 0;
}