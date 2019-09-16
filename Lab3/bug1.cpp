// (c) 2016 Andrew Sutton
// All rights reserved

#include <iostream>
#include <vector>


int main()
{
  // Print the numbers in v in reverse order.
  std::vector<int> v { 1, 2, 3, 4, 5 };
  for (int i = v.size(); i >= 0; --i)
  {
   	 std::cout << v[i-1] << '\n';
  }
  return 0;
}
