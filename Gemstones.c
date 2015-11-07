/*
Problem Statement

John has discovered various rocks. Each rock is composed of various elements, 
and each element is represented by a lower-case Latin letter from 'a' to 'z'. 
An element can be present multiple times in a rock. 
An element is called a gem-element if it occurs at least once in each of the rocks.
Given the list of N rocks with their compositions, display the number of gem-elements that exist in those rocks.
Input Format
The first line consists of an integer, N, the number of rocks. 
Each of the next N lines contains a rock's composition. 
Each composition consists of lower-case letters of English alphabet.
Constraints 
1≤N≤100 
Each composition consists of only lower-case Latin letters ('a'-'z'). 
1≤ length of each composition ≤100
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[100][100] = {('\0','\0'),};
    int t = 0,i=0,j=0 ;
    int count = 0;          //counter
    int a[256] = {0,};      //hash all alphabet
    int temp[256] = {0,};   //hash only one stone
    scanf("%d",&t);
    
    for(i=0;i<t;i++){
    scanf("%s",s[i]);
    }
    for(i = 0;i<t;i++){
        for(j = 0; s[i][j] != '\0';j++){
            if(temp[s[i][j]] == 0){
            temp[s[i][j]]++;
            a[s[i][j]]++;
            }
        }  
        memset(temp,0,sizeof(temp));
    }
      
    for(i=0;i<256;i++){
        if(a[i] >= t){
            count ++;
        }
    }
    
        printf("%d",count);
    return 0;
}
