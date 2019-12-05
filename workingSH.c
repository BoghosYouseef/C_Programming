/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h> 

char* to_lower_case(char* s){
    

    for(int i = 0; i != '\n'; i++){
        // char letter = s[i];
        // int letter_num = (int)s[i];
        if((s[i] >= 'A') && (s[i] <= 'Z')){
        	
            s[i] += 32;
        }
            
    }
     
    
    return s;
}


int main(){
	char msg [] = "HeLlOWoRLD";
	printf("%s \n", msg);
	printf("%s", to_lower_case(&msg));
}
