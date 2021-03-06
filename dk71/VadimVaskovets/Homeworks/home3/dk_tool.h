//
//  dk_tool.h
//  dz3
//
//  Created by Vadym Vaskovets on 3/29/18.
//  Copyright © 2018 Vadym Vaskovets. All rights reserved.
//
#include <stdio.h>
#ifndef dk_tool
#define dk_tool

typedef struct tagPoint
	{
		int x, y;
	}	
	Point;

typedef struct tagtriangle
	{
		Point *A;
		Point *B;
		Point *C;
	}
	triangle;
	triangle *create_triangle(Point *A, Point *B, Point *C);
	void enter(int *X, int *Y);
	void destroy_triangle(triangle *atriangle);
	float flat_triangle(triangle *atriangle);
	void print_triangle(triangle *atriangle);
	void writePointToJSON(FILE *aFile, Point *aPoint);
	void writetriangleToJSON(FILE *aFile, triangle *atriangle);
#endif 
