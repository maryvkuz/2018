#include <stdio.h>
#include "dk_triangle2.h"
#include "dk_triangle_array.h"

int main(int argc, const char * argv[])
{
	int k;
	int i;
	int A_x, A_y, B_x, B_y, C_x, C_y;
	triangleArray *theArray = createArray(5);
	printf("Enter the number of triangles\t");
	scanf("%d", &k);
	for(i=1; i<=k; i++)
	 {
	 	printf("\n\tEnter %d triangle\n", i);
	 	
	    enter(&A_x,&A_y);
	 	enter(&B_x,&B_y);
	 	enter(&C_x,&C_y);
	 	   
		Point A = {A_x,A_y};
		Point B = {B_x,B_y};
		Point C = {C_x,C_y};
	 	
		triangle ABC = {&A, &B, &C};
	
		addElement(theArray, &ABC, flat_triangle(&ABC));
	 }
	 
	 
	FILE *theFile = fopen("D:/test.json", "a+");
	
	writeArrayToJSON(theFile, theArray);
	
	fflush(theFile);
	fclose(theFile);
	
	
	insertion_sort(theArray);


	FILE *theFile2 = fopen("D:/test2.json", "a+");

	writeArrayToJSON(theFile2, theArray);

	fflush(theFile2);
	fclose(theFile2);
	
	freeArray(theArray);
	
	return 0;
}
