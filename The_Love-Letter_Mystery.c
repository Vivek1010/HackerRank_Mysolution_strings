/*
Problem Statement
James found a love letter his friend Harry has written for his girlfriend.
James is a prankster, so he decides to meddle with the letter. He changes all the words in the letter into palindromes.
To do this, he follows two rules:
He can reduce the value of a letter, e.g. he can change d to c, but he cannot change c to d.
In order to form a palindrome, if he has to repeatedly reduce the value of a letter,
he can do it until the letter becomes a. Once a letter has been changed to a, it can no longer be changed.
Each reduction in the value of any letter is counted as a single operation.
Find the minimum number of operations required to convert a given string into a palindrome.
Input Format
The first line contains an integer T, i.e., the number of test cases. 
The next T lines will contain a string each. The strings do not contain any spaces.

Constraints 
1≤T≤10 
1≤ length of string ≤104 
All characters are lower case English letters.

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int no_of_changes(char s[]){
    
    int start = 0;
    int end = strlen(s) - 1;
    int count = 0;
    
    while(start < end ){
        
        if(s[start] > s[end]){
            count = count + s[start] - s[end];
        }
        else{
            count = count + s[end] - s[start];
        }
        start++; end--;
    }
    
    return count;
    
}

int main() {

    int t = 0;                 //no of test cases
    char s[10001] = {'\0',};   //10 ^ 4  + 1
        
        scanf("%d",&t);
        while(t--){
            scanf("%s",s);
            printf("%d\n",no_of_changes(s));
            memset(s,'\0',sizeof(s));
        }
    
    
    return 0;
}
