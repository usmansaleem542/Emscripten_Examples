// Copyright 2012 The Emscripten Authors.  All rights reserved.
// Emscripten is available under two separate licenses, the MIT license and the
// University of Illinois/NCSA Open Source License.  Both these licenses can be
// found in the LICENSE file.

#include <math.h>
#include <emscripten.h>

extern "C" {
    EM_JS(void, call_alert, (int data), {
      console.log('hello world!', data);
    });

    int int_sqrt(int x) {
        call_alert(x);
        return sqrt(x);
    }

}