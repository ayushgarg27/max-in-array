#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int j=0; j<n; j++){
        for(int m=j+1; m<n; m++){
            if(a[j]>a[m]){
                int temp = a[j];
                a[j] = a[m];
                a[m] = temp;
            }
        }
    }
    printf("The maximum number is: ");
    printf("%d", a[n-1]);
}