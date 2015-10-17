
/*Problem Statement
Suppose you have a string S which has length N and is indexed from 0 to N−1. 
String R is the reverse of the string S. 
The string S is funny if the condition |Si−Si−1|=|Ri−Ri−1| is true for every i from 1 to N−1.
(Note: Given a string str, stri denotes the ascii value of the ith character (0-indexed) of str. 
|x| denotes the absolute value of an integer x)
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int funny_or_not(char s[]){
    int n = strlen(s);
    int i;
    for(i=0; i < n/2 ; i++){
      if(abs(s[i+1]-s[i]) != abs(s[n-1-i] - s[n-2-i]))
      return 0;
    }
    return 1;
}

int main() 
{
  int t,i;
  char s[10000] = {'\0',};
  scanf("%d",&t);
  
  for ( i = 0;i < t; i++ ) {
    scanf("%s",&s);
    
    if(funny_or_not(s)){
    printf("Funny\n");
    }
    else{
    printf("Not Funny\n");
    }
  }
    return 0;
}
