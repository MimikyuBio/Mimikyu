### 20240515 | CMake Project

1. Define CMakeLists.txt
2. Configure & Generate 

```sh
cmake -DCMAKE_BUILD_TYPE=Debug -B ./cmake-build-debug
```

3. Build

```sh
cmake --build ./cmake-build-debug --target Mimikyu -j 10
```
