/* las vegas
 * always gives correct result, or informs about the failure.
 * running time differs depending on the input.
 * includes the restriction that the expected runtime be finite.
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int array[10]={12,9,6,5,1,19,13,15,8, 4}; // Given Array

	int search = 19; // element to search

	int lower =0, upper = 9; //required for generating random number in a valid range

	int rand_number;
	int iteration=0;
	while(1){
		srand(time(0));   //use current time as seed for random number generator
		rand_number = (rand() % (upper - lower + 1) ) + lower;
		iteration++;
		printf("\nsearching %d in array, iteration # %d", search, iteration);
		if(array[rand_number] == search){
			printf("\nFound element in %d iteration", iteration);
			break;
		}
	}
}




