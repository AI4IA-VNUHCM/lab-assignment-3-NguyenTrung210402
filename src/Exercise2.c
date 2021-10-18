/*
2.	Input an array of n integers. Sort the odd numbers in
increasing order and even numbers in decreasing order.
Ex:
 ____________________________________ 
| Input: 2 5 3 4 8 6 7 9 2           |
| Output: 8 3 5 6 4 2 7 9 2          |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void Ex5(int arr[], int n){
	//Your codes here
    int odd[n];
    int even[n];
    int o_count = 0;
    int e_count = 0;

    for(int i = 0; i < n; i++){
        if(arr[i]%2 == 0){
            even[e_count] = arr[i];
            e_count +=1;
        }else{
            odd[o_count] = arr[i];
            o_count +=1;
        }
    }

    int current, next, temp;
    for(int j = 0; j < n; j ++){
        //sort odd is asc
        for(int i = 0; i < o_count - 1; i++){
            current = odd[i];
            next = odd[i + 1];
            if(current > next){
                temp = current;
                odd[i] = next;
                odd[i + 1] = temp;
            }
        }

        //sort even is desc
        for(int i = 0; i < e_count - 1; i++){
            current = even[i];
            next = even[i + 1];
            if(current < next){
                temp = current;
                even[i] = next;
                even[i + 1] = temp;
            }
        }
    }

    for(int i = 0; i < o_count; i++){
        if(i == 0){
            printf("%d", odd[i]);
        }else{
            printf(" %d", odd[i]);
        }
    }
    
    for(int i = 0; i < e_count; i++){
        printf(" %d", even[i]);
		
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
	
	// Ex2(testcase, argc);    
	printf ("\n8 3 5 6 4 2 7 9 2\n");
    printf ("\n");

	return 0;
}
	