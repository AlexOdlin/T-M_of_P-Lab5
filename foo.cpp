#include "catch.hpp"

int foo(int a,int b){

  return a+b;
}

TEST_CASE("foo","[foo]"){
  REQUIRE( foo(1,2) == 3 );
  REQUIRE_FALSE( foo(2,3) == 4 );
  
}
