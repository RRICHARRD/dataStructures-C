#include <stdio.h> 
#define maxHeight 155

#include <malloc.h> 

typedef struct {	
	int height;
	int weight;
} Person;	

int main () { 
	
	Person personOne;
	
	personOne.height = 100;
	personOne.weight = 155;
	
	printf("Height: %i, Weight: %i\n", personOne.height, personOne.weight);
	
	if(personOne.height > maxHeight) {
		printf("Height is much more height than the limit\n");
	} else {
		printf("Height is normal\n");
	}
	
	int number = 100;
	
	int* adressNumber = &number; // the "&" specify that is adress of variable number
	
	printf("The adress of number variable is %i\n", adressNumber);
	
	*adressNumber = 333; // the * means that the adress referenced in adressNumber will receive the value 333

	printf("The new value of number value is %i\n", number);
	
	printf("**************************************************************************************************\n");
	//Now, let's change the way of we made the first part of this program using memory allocation
	
	Person* personTwo = (Person*) malloc(sizeof(Person));
		
	printf("The adress of malloc function is %i\n", personTwo);	
		
	personTwo->height = 550;
	personTwo->weight = 180;
	
	printf("\nBY ADRESS -> Height: %i, WEIGHT: %i\n", personTwo->height, personTwo->weight);
	
	if(personTwo->height > maxHeight){
		printf("Height is greater than the limit\n");
	} else {
		printf("The height of by using adress don't pass the limit !\n");
	}
	
	int test = malloc(sizeof(int));
	
	printf("\nmalloc size for windows in my pc is %i", test);
	
	return 0;
}
