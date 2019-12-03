/******************************************************************************


                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h> 

char* to_lower_case(char* s){
    for(int i = 0; i != '\n'; i++){
        if((s[i] >= 'A') && (s[i] <= 'Z')){
            s[i] += 32;
        }
    }
    return s;
}

int gcd(int a, int b){
    if (b > a){
        int e = a;
        a = b;
        b = e;
    }
    
    int c = a % b;
    while (c != 1){
    
        a = b;
        b = c;
        c = a % b;
        if (c = 1){
            return b;
        }
    }
}


int[30] factor (int n){
    int[30] factors_list;
    for(int i = 0; i = n, i++){
        int num = 0
        if ((i*i)>= n){
            factors_list[num]= i
            num += 1
        }
    }
    for (int i = 0; i>= 30, i++){
        if(factors_list[i] )
    }

int main()
{
    char* string = "HelLO WoRLd";
    printf("%s\n", string);
    // char* new_string = to_lower_case(string);
    // printf("%s\n", new_string);
    printf("%d",gcd(12, 15));
    return 0;
}
