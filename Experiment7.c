#include<stdio.h>

int main(){
    int size , i, largest=0;
    
    printf("\t\t***Array Largest Number Finder***\n\n");
    
    printf("Enter Array Size:");
    scanf("%d",&size);
    
    int numbers[size];
    
    printf("Enter Array Size: \n");
    for(i=0; i<size; i++){
        printf("%d",i);
        scanf("%d",&numbers[i]);
        
        if(numbers[i]>largest){
            largest = numbers[i];
        }
    }
    printf("\nlargest Numbers: %d", largest);
    
    return 0;
}
