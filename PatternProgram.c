/*

INPUT/OUTPUT: 
8
#******#
**____**
*_*__*_*
*__**__*
*__**__*
*_*__*_*
**____**
#******#

*/


#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    printf("#");
    for (int i = 0;i<n-2;i++)
        printf("*");
    printf("#\n");
    
    for (int i = 0;i<n-2;i++){
        printf("*");
        
        for (int j=0;j<n-2;j++){
            if (j==i || j==(n-3)-i){
                printf("*");
            }else {
                printf("_");
            }
        }
        
        printf("*\n");
    }
    
    
    printf("#");
    for (int i = 0;i<n-2;i++)
        printf("*");
    printf("#\n");
}
