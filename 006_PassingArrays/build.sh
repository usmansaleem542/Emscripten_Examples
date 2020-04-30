rm bin/*
mkdir "bin"
emcc file.cpp -o bin/function.html -s EXPORTED_FUNCTIONS='["_int_sqrt", "_displayArray"]' -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall", "cwrap", "getValue", "setValue"]'