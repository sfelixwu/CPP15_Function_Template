#include <iostream>

template <typename T, typename F>
bool is_in_range (T arg_value, F myLambda)
{
  return myLambda(arg_value);
}

int
main(void)
{
  if (is_in_range(35.0, [] (double arg_value) -> bool { return ((arg_value <= 500) && (arg_value >= 0)); }))
    std::cout << "it is true" << std::endl;

  return 0;
}
