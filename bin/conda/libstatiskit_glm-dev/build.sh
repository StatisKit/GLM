set -ve

if [[  ! ( "$(uname)" == "Linux" && "$PY3K" == "1" ) ]]; then
   scons cpp-dev --prefix=$PREFIX -j$CPU_COUNT
else
    scons autowig --prefix=$PREFIX -j$CPU_COUNT --autowig-no-wrappers
fi

set +ve