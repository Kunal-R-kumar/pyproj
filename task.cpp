/*Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.
Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.
*/
#include<stdio.h>
int main(){
int an,bn,j ;
printf("Enter size of 1st array");
scanf("%d",&an);
printf("\nEnter size of 2nd array");    
scanf("%d",&bn);
if (an==bn){
    int a[an],b[an],c[an]={0};
    printf("\nEnter Elements of 1st array");
    for (int i = 0; i < an; i++){
        printf("\n Enter %d element: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter Elements of 2nd array");
    for (int i = 0; i < an; i++){
        printf("\n Enter %d element: ",i+1);
        scanf("%d",&b[i]);
    } 
    for (int i = 0; i < an; i++){   
        for (j = 0; j < an; j++){
            if ((a[i]==b[j])&&(c[j]==0)){
            c[j]=1;
            break;
            }}
        if (j==an) goto ivld;   
    }
    printf("Arrays are equal");
    return 0;
}
else goto ivld;
ivld:
    printf("\nArrays are not equal");
return 0;}
