/*
2.	Input an array of n integers. Sort the odd numbers in
increasing order and even numbers in decreasing order.
Ex:
 ____________________________________ 
| Input: 2 5 3 4 8 6 7 9 2           |
| Output: 8 3 5 6 4 2 7 9 2          |
|____________________________________|
*/

#include<stdio.h>

void Enter(int a[], int & n){
int main();{
    int a[100];
    int n;
    Enter(a,n);
    SortUp(a,n);
    return 0;

    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }
    while(n<2||n>99);
     
    for(int i=0; i<n; i++){
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
 
void xuat(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%5d",a[i]);
    }
}
 
//Ham sap xep thu nhat su dung bien trung gian
void SortUp(int a[], int n){
    int Mid;
    for(int i=0;i<n;i++)
        for(int j=0;j<=i;j++){
            if(a[j]<a[i]){
                Mid=a[i];
                a[i]=a[j];
                a[j]=Mid;
            }
        }
    printf("\nMang sau khi sap xep:\n");
    xuat(a,n);
}
//Ham sap xep thu 2 khong dung bien trung gian
void SortUp2(int a[], int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<=i;j++){
            if(a[j]<a[i]){
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
         
    printf("\nMang sau khi sap xep giam:\n");
    xuat(a,n);  

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	// Ex2(testcase, argc);
	
	return 0;
	}
}
