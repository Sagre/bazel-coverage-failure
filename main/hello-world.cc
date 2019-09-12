#include "lib/hello-time.h"
#include "main/hello-greet.h"
extern "C" {
#include "cmain/hello-other.h"
}
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  std::string who = "world";
  if (argc > 1) {
    who = argv[1];
  }
  std::cout << get_greet(who) << std::endl;
  print_localtime();
  hello_from_the_other_cide();
  printf("Return four: %d" ,i_return_four(2));
  return 0;
}
