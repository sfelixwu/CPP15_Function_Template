#include <iostream>

// template parameters

class Thing
{
private:
protected:
public:
  int seq_number;
  bool operator<=(int) { return true; }
  bool operator>=(int) { return true; }
};

template <typename T, int upper, int lower>
T is_in_range (T arg_value)
{
  Thing t;
  return t;
  // return ((arg_value <= upper) && (arg_value >= lower));
}

// is_in_range<int, 40, 10>()

// bool is_in_range
// (int arg_value)
// {
//  return ((arg_value <= 40) && (arg_value >= 10));
//}

int
main(void)
{
  Thing t;
  Thing t2 = is_in_range<Thing, 40, 10>(t);
  
  //  if (is_in_range<Thing, 40, 10>(t))
  //  std::cout << "it is true" << std::endl;
  //else
  //  std::cout << "it is false" << std::endl;    

  return 0;
}
