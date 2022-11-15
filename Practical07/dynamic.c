#include<stdio.h>
#include<stdlib.h>

//allocate the array
int *allocatearray(int n){
    int *p;
    p=(int *) malloc((n)*sizeof(int));
    if(p==NULL){printf("Error in allocating memory");}
    return p;
}
//Fill with ones
void fillwithones(int *array, int n){
    int i;
    for (i=0; i<n; i++){
        array[i]=1;
    }
}

//Print Array
void printarray(int *array, int n){
    int i;
    for (i=0; i<n; i++){
        printf("a[%d]=%d\n", i, array[i]);
    }
}

//Deallocte the array
void freearray(int *array){
    free(array);
}

int main(void){
    int length, *a;

    printf("Enter the size of the array:\n");
    if (scanf("%d", &length) <=0){
            printf("Error");
            return 1;
    } 

    a=allocatearray(length);
    fillwithones(a, length);
    printarray(a, length);
    freearray(a);
    a=NULL;

    return 0;
}