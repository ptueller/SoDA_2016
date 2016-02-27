#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k;
    int temp=0;
    char chartemp;
    scanf("%d %d\n",&n,&k);
    char s[n+k-1];
    char work[k][n+k-1];
    for(int i=n+k-2;i>=0;i--) {
        scanf("%c",&s[i]);
    }
    memset(work,'0',k*(n+k-1));
    for(int i=0;i<(n+k-1);i++) {
        for(int j=0;j<k;j++) {
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
        for(int j=0;j<k;j++) {
            if(i+j > n+k-1) break;
            work[j][i+j]=chartemp;
        }
        temp=0;
    }
    for(int i=n-1;i>=0;i--) {
        printf("%c",work[0][i]);
    }
    return 0;
}
