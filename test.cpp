#include "catch.hpp"

#include "long_int.h"
#include <vector>

TEST_CASE("long_int constructs a vector of int in reverse order", "[weight=1]") {
  long_int a("10")
  std::vector<int> v = {0, 1};
  REQUIRE( a.int_arr ==  v);
}
