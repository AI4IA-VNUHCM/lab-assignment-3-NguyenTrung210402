/*
1.	Input an array of n integers. Write a function to check whether
the array is symmetric or not (optional: use recursive)
Ex:
 ____________________________________ 
| Input: 1 2 3 2 1                   |
| Output: symmetric                  |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void Ex1(int arr[], int n){
	//Your codes here
    if(n%2 == 0 || n < 3){
        printf("\nasymmetric\n");
    }
    else {
        int i = 0;
        int j = n - 1;
        int sym = 1;
        
        while( i < n/2)
        {
            if(arr[i] != arr[j]){
                sym = 0;
                break;
            }
            i++;
            j--;
        }

        if (sym == 0)
            printf("\nasymmetric\n");
        else
            printf("\nsymmetric\n");
    }
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
		// printf("%d ", testcase[i]);
	}
	
	Ex1(testcase, argc);

    printf("\n");

	return 0;
}

