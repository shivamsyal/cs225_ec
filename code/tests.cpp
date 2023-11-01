#include <catch2/catch_test_macros.hpp>
#include "BytePair.h"
#include "tests_helper.h"
#include <string>
#include <vector

TEST_CASE("BPE algorithm works on small strings", "[weight=2]") {
  std::string text = "hello hello there";
  std::vector<std::vector<int>> out = BPE_text(text);
  std::vector<std::vector<int>> check = {{7, 7, 8, 7, 6, 5}, {17, 14, 12, 10, 8, 6}};
  REQUIRE( out == check );
}

TEST_CASE("BPE algorithm can correctly parse file", "[weight=2]") {
  std::string infile = "../../data/monkeys_paw.txt";
  std::vector<std::string> out = tokenize(text);
  std::vector<std::string> check = {...};
  // The above vector will have the token dictionary of the text
  
  
  REQUIRE(out == check);
}


TEST_CASE("BPE algorithm creates proper amount of tokens", "[weight=2]") {
  std::string infile = "../../data/monkeys_paw.txt";
  std::vector<std::string> out = tokenize(text);
  int size = out.size();
  int correct = ...;
  // we will determine the correct size as algorithm is made

  REQUIRE( size == correct );
}

