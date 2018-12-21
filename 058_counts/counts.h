#ifndef __COUNTS_H__
#define __COUNTS_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 64
struct _one_count_t {
  char * values;
  int cnt;
};
typedef struct _one_count_t one_count_t;

struct _counts_t {
  one_count_t ** array;
  size_t length;
};
typedef struct _counts_t counts_t;

counts_t * createCounts(void);
void addCount(counts_t * c, const char * name);
void printCounts(counts_t * c, FILE * outFile);

void freeCounts(counts_t * c);

#endif
