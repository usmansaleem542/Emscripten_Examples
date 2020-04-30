rm bin/*
#emcc --bind -Oz  myclass.cpp -o bin/myclass.js -s "EXTRA_EXPORTED_RUNTIME_METHODS=['addOnPostRun']"
emcc --bind -Oz  myclass.cpp -o bin/myclass.js -s
# emrun index.html