Odd Length String Diagonal Pattern [ZOHO]
An odd length string S of length L is passed as the input.
The program must print the string S as two diagonals as shown in the example  Input/Output below.

Input Format:
The first line will contain S. Output Format: L lines will contain the pattern as shown in the example Input/Output below.

Boundary Conditions: 
Length of S is from 3 to 51.

Example Input/Output 1: 
Input: 
cry

Output:
c y
 r
c y

Example Input/Output 2:
Input:
tiger

Output:
t r
i e
 g
i e
t r

CODE : 

#include <stdio.h>
#include <string.h>
#define true 1
int main()
{
    char s[100];
    scanf("%s",s);
    int left,right;
    left = 0; right = strlen(s)-1;
    
    while (1){
        for (int i = 0 ;i<left;i++){
            printf(" ");
        }
        
        if (left >= right) break;
        
        printf("%c",s[left++]);
        
        for (int i = 0 ; i<right - left;i++){
            printf(" ");
        }
        
        printf("%c",s[right--]);
        for (int i=right+1;i<strlen(s);i++){
            printf(" ");
        }
        
        
        printf("\n");
    }
    
    printf("%c\n" , s[strlen(s)/2]);
    left--; right++;
    while (true){
        for (int i = 0 ;i<left;i++){
            printf(" ");
        }
       
        if (left<0 || right>=strlen(s)) break;
        printf("%c",s[left--]);
        for (int i = 0 ; i<right - left-2;i++){
            printf(" ");
        }
        printf("%c",s[right++]);
        for (int i=right+1;i<strlen(s);i++){
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
