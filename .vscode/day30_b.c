#include <stdio.h>
int main(){
    int n,i,pos=0,neg=0,zero=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>0) pos++;
        else if(a[i]<0) neg++;
        else zero++;
    }
    printf("Positive count = %d\nNegative count = %d\nZero count = %d\n",pos,neg,zero);
    return 0;
}
