#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long int n, k;
    long int temp=0;
    char chartemp;
    scanf("%lld %lld\n",&n,&k);
    long long int stringlen = n+k-1;
    char s[stringlen];
    char work[k][stringlen];
    for(long long int i=stringlen-1;i>=0;i--) {
        scanf("%c",&s[i]);
    }
    memset(work,'0',k*stringlen);
    for(long int i=0;i<stringlen;i++) {
        for(long long int j=0;j<k;j++) {
            if(work[j][i]=='0') {
                temp ^= 0;
            }
            else {
                temp ^= 1;
            }
            //printf("Work[%d][%d]=%c\n",j,i,work[j][i]);
        }
        //printf("Work temp for i=%d is %d\n",i,temp);
        if(s[i]=='0') {
            temp ^= 0;
        }
        else {
            temp ^= 1;
        }
        if(temp==0) {
            chartemp='0';
        }
        else {
            chartemp='1';
        }
        //printf("Setting i=%d to %c\n",i,chartemp);
        for(long long int j=0;j<k;j++) {
            if(i+j >= stringlen) break;
            work[j][i+j]=chartemp;
        }
        temp=0;
    }
    for(long long int i=n-1;i>=0;i--) {
        printf("%c",work[0][i]);
    }
    return 0;
}
