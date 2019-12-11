  
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
        if (c == 1){
            return b;
        }
    }

    return "no GCD found";
}





int factor(int n){

    int sum = n;
    for(int i = 2; i != n; i++){
        int num = 0;
        while ( sum % i == 0){
            num += 1;
            sum /= i;
            

        }
        if(num != 0){
            printf("(%d, %d)",i , num);
        }
    }
    
        
}

int binary_decomp(int n){
    while(n > 0){
        printf("%d", n%2);
        n /= 2;
    }
}

int sieve_of_eratosthenes(int n){
    int lista [n];
    for (int i = 0; i < n; i++ ){
        lista [i] = 0;
    }
    for (int j = 2; j < n; j++){
        for(int k = 0; k < n; k++){
            if(j*k < n){
            lista [j*k] ++;
            }
        }
    }
    for (int l = 0; l < n; l++){
        if(lista[l] == 0){
        printf("%d " , l);
        }
    }
}


int main(){
	char msg [] = "HeLlOWoRLD";
	printf("%s \n", &msg);
	printf("%s \n", to_lower_case(&msg));
	//printf("%d \n", gcd(150,120));
    factor(20);
    printf("\n");
    binary_decomp(18);
    printf("\n");
    long int numpow = 1;
    for(int i = 0; i <= 33; i++){
        binary_decomp(numpow);
        printf(":");
        printf("%d \n", numpow);
        
        numpow *= 2;
    }
    sieve_of_eratosthenes(100);
}