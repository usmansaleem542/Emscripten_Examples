emsdk activate mingw-4.6.2-32bit
mkdir build
cd build
emconfigure cmake ..
emmake make -j4