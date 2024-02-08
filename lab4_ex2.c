#include <stdio.h>

int main(void) {
	
	float n;
	float decimal;
	int m;
	int num;

    printf("Enter n: ");
    scanf("%f",&n);
    
    decimal = n - (int) n;
    
    if (decimal == 0){
    	num = n;
    	if (num > 0){
    	m = num;	
    	printf("n!! = %i",num);
    		while (num > 2){
    			// num = num - 2;
    			num -= 2;
    			printf("*%i",num);
    			m *= num;
    		}
		}
		
		else {
		    printf("n!! = 1",num);
			m = 1;
		}
		printf(" = %i",m);	
	}
	
	else{
		printf("Invalid Input");
	}
    
    return 0;
}