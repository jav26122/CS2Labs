// Copyright (c) 2016 Andrew Sutton
// All rights reserved

#include <iostream>


// Read a number from the input stream.
int
get_number(std::istream& is)
{
  unsigned result;
  is >> result;
  return result;
}


int main()
{
  // Read a sequence of numbers and pritn the total.
  int tot = 0;
  while (true) {
    int n = get_number(std::cin);
    if (!std::cin)
      break;
    tot += n;
  }
  std::cout << "total: " << tot << '\n';
}
