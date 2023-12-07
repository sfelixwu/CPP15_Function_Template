#include <iostream>

int
main(void)
{
  auto iir = [] (double arg_value) -> 
    bool {return ((arg_value <= 500) && (arg_value >= 0));};
  if (iir (35.0))
    std::cout << "it is true" << std::endl;
  return 0;
}
