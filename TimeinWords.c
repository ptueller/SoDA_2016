#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char hourwords[31][20] = {{"o' clock"},{"one"},{"two"},{"three"},{"four"},{"five"},{"six"},{"seven"},{"eight"},{"nine"},{"ten"},{"eleven"},{"twelve"},{"thirteen"},{"fourteen"},{"quarter"},{"sixten"},{"seventeen"},{"eighteen"},{"nineteen"},{"twenty"},{"twenty one"},{"twenty two"},{"twenty three"},{"twenty four"},{"twenty five"},{"twenty six"},{"twenty seven"},{"twenty eight"},{"twenty nine"},{"half"}};

int main(){
    int h; 
    scanf("%d",&h);
    int m; 
    scanf("%d",&m);
    
    int newm;
    
    char finMin[20];
    char finHour[20];
    memset(finMin,0,20);
    memset(finHour,0,20);
    
    if(m==0) {
        strcpy(finMin,hourwords[h]);
        strcpy(finHour,hourwords[m]);
    }
    else {
        if(m>30) {
            newm=60-m;
            strcpy(finMin,hourwords[newm]);
            strcat(finMin," minutes to");
            strcpy(finHour,hourwords[h+1]);
        }
        else {
            strcpy(finMin,hourwords[m]);
            strcat(finMin," minutes past");
            strcpy(finHour,hourwords[h]);
        }
    }
    
    
    
    
    printf("%s %s\n",finMin,finHour);
    
    return 0;
}
