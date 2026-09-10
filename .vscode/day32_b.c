#include <stdio.h>
int main(){
    long long n;
    int freq[10]={0},i,maxDigit=0;
    printf("Enter an integer: ");
    scanf("%lld",&n);

    // Count frequency of each digit
    while(n>0){
        freq[n%10]++;
        n/=10;
    }

    // Find digit with maximum frequency
    for(i=1;i<10;i++){
        if(freq[i]>freq[maxDigit]) maxDigit=i;
    }

    printf("Digit occurring most times = %d\n",maxDigit);
    return 0;
}
