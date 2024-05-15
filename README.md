Mimikyu<sup>common c lib</sup>
==============================

### 빌드를 위한 스크립트

```sh
$ cmake -DCMAKE_BUILD_TYPE=Debug -B ./cmake-build-debug
```

### 현재 폴더에 설치하는 스크립트

```sh
$ cmake -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=${PWD} -B ./cmake-build-debug
```
