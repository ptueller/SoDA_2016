#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    unsigned int arr[n];
    unsigned int newarr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<32;j++) {
            if(arr[i] & (0x1<<j)) {
                newarr[i] &= ~(0x1 << j);
            }
            else {
                newarr[i] |= 0x1 << j;
            }
        }
        printf("%u\n",newarr[i]);
    }
    return 0;
}
