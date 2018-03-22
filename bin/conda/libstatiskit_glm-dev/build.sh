set -ve

# scons autowig --prefix=$PREFIX -j$CPU_COUNT --autowig-no-wrappers
scons cpp-dev

set +ve