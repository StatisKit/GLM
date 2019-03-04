set -ve

scons autowig --prefix=${PREFIX} -j${CPU_COUNT} --autowig-no-wrappers

set +ve