/*
Problem Statement
Sid is obsessed with reading short stories. Being a CS student, 
he is doing some interesting frequency analysis with the books.
He chooses strings S1 and S2 in such a way that |len(S1)−len(S2)|≤1.
Your task is to help himh find the minimum number of characters of the first string,
he needs to change to enable him to make it an anagram of the second string.
Note: A word x is an anagram of another word y if we can produce y by rearranging the letters of x.
Input Format 
The first line will contain an integer, T, representing the number of test cases.
Each test case will contain a string having length len(S1)+len(S2), 
which will be concatenation of both the strings described above in the problem.
The given string will contain only characters from a to z.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int a[256] = {0,};       //hast storag
int maxlen = 10000;

void hash_string_inc(int a[],char s[][maxlen],int i,int start, int end){
    while(start <= end){
        if(a[s[i][start]] == 0){
            a[s[i][start]]++;
        }
            start++;
        
    }
}
void hash_string_dec(int a[],char s[][maxlen],int i,int start, int end){
    while(start <= end){
            a[s[i][start]]--;
            start++;
    }
}

int if_possible( char s[][maxlen],int i,int n)
{
    int start = 0;          
    int end = n/2;          //mid of the string
    
    memset(a,0,sizeof(a));
    hash_string_inc(a,s,i,start,end-1);
    hash_string_dec(a,s,i,end,n-1);
    
    for(i=0;i<256;i++){
        if(a[i] != 0)/* negative value */{
            return -1;
        }
    }
    
    return 1;
}

int main() {
    
    int t;                  //no of test cases
    int i = 0;              // itretor
    char s[100][10000];     //srings strage
    int n = 0;              // string length 
            
    scanf("%d",&t);
    
    for(;t--;){
        
        scanf("%s",s[i]);
        n = strlen(s[i]);
        
           if (-1 == if_possible(s,i,n)){
            printf("-1\n");
        }
        else{
            printf("-2\n");
        }
        i++;
        
    }   
    return 0;
}
