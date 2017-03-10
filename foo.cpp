#include <catch.hpp>

void sum(int a,b){

  return a+b;
}

TESTCASE("sum","[sum]"){
  REQUIRE( sum(1,2) == 3 );
  REQUIRE( sum(2,3) == 4 );
  
}
