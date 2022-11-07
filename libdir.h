#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <string.h>
     
#define LINESIZE 1024

FILE* openFile(char* filename);

int getSize(FILE* file);

void printFile(FILE* arq);

DIR* openDir(char* dirname);

void readDir(DIR* dirstream);