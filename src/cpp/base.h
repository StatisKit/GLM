#if defined WIN32 || defined _WIN32 || defined __CYGWIN__
  #ifdef LIBSTATISKIT_GLM
    #ifdef __GNUC__
      #define STATISKIT_GLM_API __attribute__ ((dllexport))
    #else
      #define STATISKIT_GLM_API __declspec(dllexport)
    #endif
  #else
    #ifdef __GNUC__
      #define STATISKIT_GLM_API __attribute__ ((dllimport))
    #else
      #define STATISKIT_GLM_API __declspec(dllimport)
    #endif
  #endif
#else
  #if __GNUC__ >= 4
    #define STATISKIT_GLM_API __attribute__ ((visibility ("default")))
  #else
    #define STATISKIT_GLM_API
  #endif
#endif