/*
Problem Statement
You are given two strings, A and B. Find if there is a substring that appears in both A and B.
Input Format
Several test cases will be given to you in a single file.
The first line of the input will contain a single integer T, the number of test cases.
Then there will be T descriptions of the test cases. Each description contains two lines.
The first line contains the string A and the second line contains the string B.
Output Format
For each test case, display YES (in a newline), if there is a common substring. Otherwise, display NO.
Constraints
All the strings contain only lowercase Latin letters.
1<=T<=10
1<=|A|,|B|<=105
/*

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int a[26] = {0,};     //hash value container

int is_substring(char s1[],char s2[]){
    
    int i = 0;
    int len = 0;
    
        len = strlen(s1);
        for(i=0;i< len;i++){
            a[s1[i] -'a']++;
        }
        
        len = strlen(s2);
        for(i=0;i< len;i++){
            if(a[s2[i] -'a']){
                return 1;
            }
        }
    return 0;
}

int main() {
    
    int t = 0;         //no of test cases
    char s1[100001] = {'\0',};
    char s2[100001] = {'\0',};
    int i = 0;
    int len = 0;        // length of the strings
    
    scanf("%d",&t);
    for(;t--;){
        
        scanf("%s",s1);
        scanf("%s",s2);
        if(is_substring(s1,s2)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        memset(s1,'\0',sizeof(s1));
        memset(s1,'\0',sizeof(s1));
        memset(a,0,sizeof(a));
    }
    return 0;
}
