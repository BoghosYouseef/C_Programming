
#include <stdio.h>
#include <string.h> 

char* to_lower_case(char* s){
	int A_as_int = (int)'A';
	int Z_as_int = (int)'Z';
	int i;
	char str[sizeof(s)];
	char* new_str[strlen(s)];
	
    for(i = 0; i != '\n'; i++){
        char i_as_char = s[i];
    	int i_as_int = (int)i_as_char;
        if((i_as_int >= A_as_int) && (i_as_int <= Z_as_int)){
        	
            i_as_int += 32;
            str[i] = (char*)i_as_int;}
            

        else {str[i] = (char*)i_as_int;}
    }
     
    
    return str;
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

/*
int[30] factor (int n){
    int[30] factors_list;
    for(int i = 0; i = n, i++){
        int num = 0
        if ((i*i)>= n){
            factors_list[num]= i;
            num += 1;
        }
    }
    for (int i = 0; i>= 30, i++){
        if(factors_list[i] )
    }
}
*/
int main()
{
    char* string = "HelLO WoRLd";
    printf("%s\n", string);
    char* second_str = "BaYe Of INTErNET";
	char* second_str_lower = to_lower_case(second_str);
    char* new_string = to_lower_case(string);
    printf("%s\n", new_string);
    printf("%s\n", second_str_lower);
    printf("%d",gcd(12, 15));
    return 0;
}
