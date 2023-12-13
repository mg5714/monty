#include "monty.h"

char *_strndup(const char *src, size_t size) {
  char *dup = malloc(size + 1);
  if (!dup) {
    return NULL;
  }
  memcpy(dup, src, size);
  dup[size] = '\0';
  return dup;
}

