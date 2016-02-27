#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char s[10000];
    int alphabet[26];
    scanf("%s",s);
    int numbers[strlen(s)];
    int common=0;
    int max=0;
    if(strlen(s)==1) {
        printf("YES");
        return 0;
    }
    memset(alphabet,0,sizeof(int)*26);
    memset(numbers,0,sizeof(int)*strlen(s));
    for(int i=0;i<strlen(s);i++) { //Alphabet contains the number of occurrences of each letter
        alphabet[s[i]-97]++;
    }
    for(int i=0;i<26;i++) { //Numbers contains the number of the number of occurrences
        if(alphabet[i]==0) continue;
        numbers[alphabet[i]]++;
        printf("i=%d: numbers[%d]=%d\n",i,alphabet[i],numbers[alphabet[i]]);
    }
    for(int i=0;i<strlen(s);i++) {
        if(numbers[i]>max) {
            max = numbers[i];
            common = i;
        }
    }
    printf("common = %d\n",common);
    //Common contains the most common number of occurrences
    //Now we look for deviations from the common number of occurrences
    int deviation=0;
    for(int i=1;i<strlen(s);i++) {
        if(i==common) continue;
        if(numbers[i]==0) continue;
        if(abs(common-i)>1 && !(i==1 && numbers[i]==1)) {
            printf("i = %d\n",i);
            printf("NO");
            return 0;
        }
        else {
            deviation += numbers[i];
        }
    }
    printf("deviation = %d\n",deviation);
    if(deviation>1) printf("NO");
    else printf("YES");
    return 0;
}
