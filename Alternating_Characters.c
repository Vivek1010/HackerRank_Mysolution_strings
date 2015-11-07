/*
Problem Statement
Shashank likes strings in which consecutive characters are different. 
For example, he likes ABABA, while he doesn't like ABAA. Given a string containing characters A and B only,
he wants to change it into a string he likes. To do this, he is allowed to delete the characters in the string.
Your task is to find the minimum number of required deletions.
Input Format
The first line contains an integer T, i.e. the number of test cases. 
The next T lines contain a string each.
Output Format
For each test case, print the minimum number of deletions required.
Constraints
1≤T≤10 
1≤ length of string ≤105
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
    char s[100000] = {'\0'};
    int p = 0 ;      //previous
    int n = 1 ;      //next
    int t = 0 ;      // no of test cases
    int count = 0;   //counter
    
    scanf("%d",&t);
    for(;t--;){
        
        scanf("%s",s);
        while(s[n] != '\0'){
            
            while(s[p] == s[n]){
                count++;
                n++;
            }
            p = n;
            n++;
        }
    printf("%d\n",count);
    memset(s,'\0',sizeof(s));
    count = 0;
    p = 0 ;
    n = 1;
    }    
    return 0;
}
