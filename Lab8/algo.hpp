#ifndef ALGO_APP
#define ALGO_HPP

// Jaret Varn <jav76@uakron.edu>
// University of Akron

#include <iostream>
#include <iterator>


template <class Iter>
void print(Iter first, Iter limit)
{
  while (first != limit)
  {
    std::cout << *first;
    ++first;
    if (*first < *limit)
    {
      std::cout << " "; // No space after last object.... Because why not I guess.
    }
  }
}

template <class Iter>
Iter find(Iter first, Iter limit, int value)
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

template <class Iter>
bool in(Iter first, Iter limit, int value)
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

template <class Iter>
int count(Iter first, Iter limit, int value)
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

template <class Iter>
bool equal(Iter first1, Iter limit1, Iter first2, Iter limit2)
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

template <class Iter>
Iter minimum(Iter first, Iter limit)
{
  if (limit - first == 0)
  {
    std::cout << "The range is empty." << std::endl;
    return limit;
  }
  Iter min = first;
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

template <class Iter>
Iter maximum(Iter first, Iter limit)
{
  if (limit - first == 0)
  {
    std::cout << "The range is empty." << std::endl;
    return limit;
  }
  Iter max = first;
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

template <class Iter>
int compare(Iter first1, Iter limit1, Iter first2, Iter limit2)
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

template <class Iter>
void copy(Iter first1, Iter limit1, Iter first2, Iter limit2)
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

template <class Iter>
void fill(Iter first, Iter limit, int value)
{
  while (first != limit)
  {
    *first = value;
    ++first;
  }
}




#endif
