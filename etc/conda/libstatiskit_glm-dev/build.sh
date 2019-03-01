set -ve

scons cpp-dev --prefix=${PREFIX} -j${CPU_COUNT}

set +ve