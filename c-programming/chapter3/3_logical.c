/*
 * author: Mahmud Ahsan
 * https://github.com/mahmudahsan
 * blog: http://thinkdiff.net
 * http://banglaprogramming.com
 * License: MIT License
 */
 
/* 
 * && Logical And
 * || Logical OR
 */

#include <stdio.h>

int main(){
    int number;
    
    printf("Please enter a number: ");
    scanf("%d", &number);
    if (number < 10 && number >= 5) {
        printf("Input number is less than 10 and Greater than or Equal to 5\n");
    }
    else if (number < 50 || number <= 40){
        printf("Input number is less than 50 or less than or equal to 40\n");
    }
    else {
        printf("Input number is greater than or equal to 50\n");
    }
        
    return 0;
}