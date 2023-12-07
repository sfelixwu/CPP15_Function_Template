#include <iostream>

template <typename T, int upper, int lower>
bool is_in_range (T arg_value)
{
  return ((arg_value <= upper) && (arg_value >= lower));
}

int
main(void)
{
  if (is_in_range<double, 40, 10>(55.0))
    std::cout << "it is true" << std::endl;
  else
    std::cout << "it is false" << std::endl;    

  return 0;
}
