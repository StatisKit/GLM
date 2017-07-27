set -ve

scons py --prefix=$PREFIX -j$CPU_COUNT

set +ve