#ifndef DK_SORT_H_INCLUDED
#define DK_SORT_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

void sort_bulbashka(char *aray, int n);
void vyvod_masiva(char* x, int size);
void sort_vstavka(char *aray, int size);
void sort_vybora(char *aray, int size);
void zapys_sortirovky_v_fajl(char *aray, int size, char *name);
int GetCharsAmoutInFile (FILE* file);
char* loadFile (char * path , int * size);


#endif // DK_SORT_H_INCLUDED
