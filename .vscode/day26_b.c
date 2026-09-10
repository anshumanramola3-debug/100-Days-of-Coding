#include <stdio.h>
int main(){
    int i,j;
    int rows[]={1,2,3,5,3,1};
    for(i=0;i<6;i++){
        for(j=0;j<rows[i];j++) printf("*\n");
        printf("\n");
    }
    return 0;
}
