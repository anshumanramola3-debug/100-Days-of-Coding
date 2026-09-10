#include <stdio.h>
int main(){
    int n,i,x,pos;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n+1];   // +1 to allow insertion
    printf("Enter %d sorted elements:\n",n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    printf("Enter element to insert: ");
    scanf("%d",&x);

    // Find position where x should be inserted
    pos=n;
    for(i=0;i<n;i++){
        if(a[i]>x){
            pos=i;
            break;
        }
    }

    // Shift elements to the right
    for(i=n;i>pos;i--) a[i]=a[i-1];
    a[pos]=x;
    n++;

    printf("Array after insertion:\n");
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
