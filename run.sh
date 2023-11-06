set -eo pipefail

cmake . -B dist/cmake -DCMAKE_INSTALL_PREFIX=dist
cmake --build dist/cmake --target APIApp
cmake --install dist/cmake

./dist/bin/APIApp
