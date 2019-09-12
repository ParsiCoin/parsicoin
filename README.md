Website :

https://parsicoin.net

-= Building ParsiCoin =-

On *nix:

Dependencies: GCC 4.7.3 or later, CMake 2.8.6 or later, and Boost 1.55 or later.

You may download them from:

http://gcc.gnu.org/

http://www.cmake.org/

http://www.boost.org/

Alternatively, it may be possible to install them using a package manager.

To build, change to a directory where this file is located, and run ```make```. The resulting executables can be found in build/release/src.

Advanced options:

Parallel build: run ```make -j<number of threads>``` instead of ```make```.

Debug build: run ```make build-debug```.

Test suite: run ```make test-release``` to run tests in addition to building. Running ```make test-debug``` will do the same to the debug version.


On Windows:

Dependencies: MSVC 2013 or later, CMake 2.8.6 or later, and Boost 1.55 or later. You may download them from:

http://www.microsoft.com/

http://www.cmake.org/

http://www.boost.org/

To build, change to a directory where this file is located, and run this commands: (VisualStudio 2015)

```
mkdir build && cd build && cmake .. -G "Visual Studio 14 Win64" ..
```

open ParsiCoin.sln File on Visual Studio

And Finaly do the Build.

Good luck!
