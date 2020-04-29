#include <emscripten/bind.h>
using namespace emscripten;

float divide(float a, float b) {
    return a / b;
}
float mult(float a, float b) {
    return a * b;
}
float add(float a, float b) {
    return a + b;
}
float sub(float a, float b) {
    return a - b;
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("divide", &divide);
    function("mult", &mult);
    function("add", &add);
    function("sub", &sub);
}