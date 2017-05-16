set -ve

scons cpp --prefix=$PREFIX -j$CPU_COUNT

set +ve