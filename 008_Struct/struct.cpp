// em++ --bind test.cpp -o test.js
#include <emscripten.h>
#include <emscripten/bind.h>
#include <string>
#include <stdio.h>
using namespace emscripten;

struct MyStruct {
  double a, b, c;
  std::string msg;
};

MyStruct ProcessStruct(const MyStruct x, double numb, std::string msg) {
    MyStruct r;
    r.a = x.a * numb;
    r.b = x.b * numb;
    r.c = x.c *  numb;
    r.msg = msg;
    printf("ProcessStruct Function Called");
    return r;
}

int main( ){

    printf("ProcessStruct Function Called");
    return 0;
}

EMSCRIPTEN_BINDINGS(my_struct) {
  class_<MyStruct>("MyStruct")
    .constructor<>()
    .property("a", &MyStruct::a)
    .property("b", &MyStruct::b)
    .property("c", &MyStruct::c)
    .property("msg", &MyStruct::msg)
    ;

  function("ProcessStruct", &ProcessStruct);
}