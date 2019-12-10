  
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



int factor(int n){
    
    char [] factors_list;
    for(int i = 0; i = n; i++){
        int num = 0;
        int factor_element = i;
        while ((factor*factor)<= n){
            num += 1;
            factor_element *= i;
        }
        strcpy(factors_list, ("(%d, %d)",factor , num));
    
    }
    return factors_list;
}


int main(){
	char msg [] = "HeLlOWoRLD";
	printf("%s \n", &msg);
	printf("%s \n", to_lower_case(&msg));
	printf("%d \n", gcd(150,120));
	
}