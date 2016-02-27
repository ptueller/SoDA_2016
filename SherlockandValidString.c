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
    memset(alphabet,0,26);
    memset(numbers,0,strlen(s));
    for(int i=0;i<strlen(s);i++) { //Alphabet contains the number of occurrences of each letter
        alphabet[s[i]-97]++;
    }
    for(int i=0;i<26;i++) { //Numbers contains the number of the number of occurrences
        numbers[alphabet[i]]++;
    }
    for(int i=0;i<strlen(s);i++) {
        if(numbers[i]>max) {
            max = numbers[i];
            common = i;
        }
    }
    //Common contains the most common number of occurrences
    //Now we look for deviations from the common number of occurrences
    int deviation=0;
    for(int i=0;i<strlen(s);i++) {
        if(i==common) continue;
        if(numbers[i]>0 && (abs(common-i)>1)) {
            printf("NO");
            return 0;
        }
        else if(numbers[i]>0 && abs(common-i)==1) {
            deviation++;
        }
    }
    if(deviation>1) printf("NO");
    else printf("YES");
    return 0;
}
