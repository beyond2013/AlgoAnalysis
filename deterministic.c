/*
 * deterministic search algorithm
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int array[10]={12,9,6,5,1,19,13,15,8, 4}; // Given Array

	int search = 19; // element to search

	int counter;
	for(counter=0;counter<=9;counter++)
	{
		if(array[counter]==search)
		{
			printf("found %d in % iteration", search, counter+1);
		}
	}

}




