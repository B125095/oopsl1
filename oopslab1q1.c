#include<stdio.h>
int main(){
    int a[100],n;
    printf("Enter how many number you wants\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    int p=a[0],q=a[0];
    float r;
    for(int j=1;j<n;j++){
        
        if(p<a[j]){
            p=a[j];

        }
        if(q>a[j]){
            q=a[j];
        }
        r=r+a[j];    }
        printf("The largest number between the given number is %d\n",p);
        printf("The smallest number in between the given number is %d\n ",q);
        printf("The average of given number is %.4f\n",r/n);
    return 0;
}