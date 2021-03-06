#ifndef UNTITLED_DK_TRIANGLE_H
#define UNTITLED_DK_TRIANGLE_H

#include <stdio.h>
#include <malloc.h>
#include <math.h>

typedef struct tagPoint
{
    int x;
    int y;
}Point;

typedef struct tagTriangle
{
    Point *A;
    Point *B;
    Point *C;
}Triangle;

Triangle *createTriangle(Point *A, Point *B, Point *C);
void destroyTriangle(Triangle *aTriangle);

int triangleArea(Triangle *aTriangle);

#endif
