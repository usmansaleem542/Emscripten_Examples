rm bin/*
mkdir "bin"
#emcc struct.cpp -o bin/struct.js -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall", "cwrap", "getValue", "setValue"]'
emcc --bind -Oz  struct.cpp -o bin/struct.js