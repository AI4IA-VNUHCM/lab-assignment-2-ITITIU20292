/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	//Your codes here
	int n;
    printf("Enter number (n>1) = ");
    scanf("%d", &n);
    if(n<2){
        printf("Enter number (n>1)");
    }else{
    printf("%d = ", n);

    for (int i = 2; i <= n; i++) {
        while(n % i == 0) {
            printf("%d", i);
            if(n !=i){
                printf("*");
            }
            n /= i;
        }
    }
}
	
	return 0;
}
