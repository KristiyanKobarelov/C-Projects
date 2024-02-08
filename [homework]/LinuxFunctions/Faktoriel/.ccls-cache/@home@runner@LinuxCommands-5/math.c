#include <stdio.h>

#include "math.h"

int faktor(int number)
{
  int result = 1;
  while(number != 0)
    {
      result *= number;
      number--;
    }
  return result;
}