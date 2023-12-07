#include <iostream>

template <typename T, int upper, int lower>
bool is_in_range (T arg_value)
{
  return ((arg_value <= upper) && (arg_value >= lower));
}

int
main(void)
{
  bool (*func_ptr)(double);
  fprintf(stdout, "%p\n", (void*) func_ptr);

  func_ptr = is_in_range<double, 500, 0>;

  fprintf(stdout, "%p\n", (void*) func_ptr);

  if ((*func_ptr)(35.0))
    std::cout << "it is true" << std::endl;

  fprintf(stdout, "%p\n", (void*) func_ptr);

  return 0;
}
