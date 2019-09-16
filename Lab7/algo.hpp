#ifndef ALGO_APP
#define ALGO_HPP

// Jaret Varn <jav76@uakron.edu>
// University of Akron

#include <iostream>
#include <iterator>


void print(int* first, int* limit)
{
  while (first != limit)
  {
    std::cout << *first;
    ++first;
    if (first < limit)
    {
      std::cout << " "; // No space after last object.... Because why not I guess.
    }
  }
}


int* find(int* first, int* limit, int value)
{
  while (first != limit)
  {
    if (*first == value)
    {
      return first; // Value is found within the range
    }
    else
    {
      ++first;
    }
  }
  return limit; // Value is not found
}

bool in(int* first, int* limit, int value)
{
  if (*find(first, limit, value) == value)
  {
    if(value != *limit) // This is necessary in the case that the value is the limit.
    {
      return true;
    }
  }
  return false;
}

int count(int* first, int* limit, int value)
{
  int countVal = 0;
  while (first != limit)
  {
    if (*first == value)
    {
      ++countVal;
    }
    ++first;
  }
  return countVal;
}

bool equal(int* first1, int* limit1, int* first2, int* limit2)
{
  if (limit1 - first1 == limit2 - first2) // Check sizes for equality
  {
    while (first1 != limit1) // This could be either first1, limit1 or first2, limit2 because the sizes are the same.
    {
      if (*first1 != *first2)
      {
        return false;
      }
      ++first1;
      ++first2;
    }
  }
  else
  {
    std::cout << "Sizes of ranges must be equal for equal function." << std::endl;
  }
  return true;
}

int minimum(int a, int b)
{
  if (a != b)
  {
    if (a < b)
    {
      return a;
    }
    else
    {
      return b;
    }
  }
  std::cout << a << " and " << b << " are equal." << std::endl;
  return -1;
}

int* minimum(int* first, int* limit)
{
  if (limit - first == 0)
  {
    std::cout << "The range is empty." << std::endl;
    return limit;
  }
  int* min = first;
  while (first != limit)
  {
    if (*first < *min)
    {
      min = first;
    }
    ++first;
  }
  return min;
}

int maximum(int a, int b)
{
  if (a != b)
  {
    if (a > b)
    {
      return a;
    }
    else
    {
      return b;
    }
  }
  std::cout << a << " and " << b << " are equal." << std::endl;
  return -1;
}

int* maximum(int* first, int* limit)
{
  if (limit - first == 0)
  {
    std::cout << "The range is empty." << std::endl;
    return limit;
  }
  int* max = first;
  while (first != limit)
  {
    if (*first > *max)
    {
      max = first;
    }
    ++first;
  }
  return max;
}

int compare(int* first1, int* limit1, int* first2, int* limit2)
{
  while (first1 != limit1 && first2 != limit2)
  {
    if (*first1 < *first2)
    {
      return -1;
    }
    if (*first2 < *first1)
    {
      return 1;
    }
    ++first1;
    ++first2;
  }
  if (first1 == limit1) {
    if (first2 != limit2)
      return -1; // [first1, limit1) is a prefix of [first2, limit2)
    else
      return 0;  // [first1, limit1) and [first2, limit2) are equivalent
  }
  else {
    return 1;    // [first2, limit2) is a prefix  of [first1, limit1)
  }

}

void copy(int* first1, int* limit1, int* first2, int* limit2)
{
  if (limit1 - first1 == limit2 - first2)
  {
    while (first1 != limit1)
    {
      *first2 = *first1;
      ++first1;
      ++first2;
    }
  }
  else
  {
    std::cout << "Ranges must be equal for copy function." << std::endl;
  }
}

void fill(int* first, int* limit, int value)
{
  while (first != limit)
  {
    *first = value;
    ++first;
  }
}




#endif
