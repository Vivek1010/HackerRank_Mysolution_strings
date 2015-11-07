/*
Problem Statement
Roy wanted to increase his typing speed for programming contests. So,
his friend advised him to type the sentence "The quick brown fox jumps over the lazy dog" repeatedly, 
because it is a pangram. (Pangrams are sentences constructed by using every letter of the alphabet at least once.)
After typing the sentence several times, Roy became bored with it. So he started to look for other pangrams.
Given a sentence s, tell Roy if it is a pangram or not.
Input Format Input consists of a line containing s.
Constraints 
Length of s can be at most 103 (1≤|s|≤103) and it may contain spaces, lower case and upper case letters. 
Lower case and upper case instances of a letter are considered the same.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int pangram_or_not(char s[]){
    int len = strlen(s);
    int i,j;
    int a[256] = {0,};
    
    for(i=0 ; i < len;i++){
        if(isalpha(s[i]) && isupper(s[i])){
            s[i]= tolower(s[i]);
        }
        if(s[i] >= 'a' && s[i] <= 'z'){
        a[s[i]]++;
        }          
    }
        
    for(i='a' ; i <= 'z' ;i++){
        if(a[i]== 0){
        return 0;
        } 
    }
    return 1;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        int t,i;
        char s[10000] = {'\0',};

                fgets(s,10000,stdin);               
                if(pangram_or_not(s)){
                printf("pangram\n");
                }
                else{
                printf("not pangram\n");
                }
                
                return 1;
        
}
