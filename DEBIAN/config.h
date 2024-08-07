#define ANSIRED     "\x1b[31m"
#define ANSIGREEN   "\x1b[32m"
#define ANSIYELLOW  "\x1b[33m"
#define ANSIBLUE    "\x1b[34m"
#define ANSIMAGENTA "\x1b[35m"
#define ANSICYAN    "\x1b[36m"
#define ANSIRESET   "\x1b[0m"

#ifdef __linux__
#define OS "Linux"
#elif __APPLE__
#define OS "MacOs"
#elif __ANDROID__ 
#define OS "Android"
#elif __unix__ 
#define OS "Unix"
#elif _POSIX_VERSION
#define OS "Posix"
#elif BSD
#define OS "BSD"
#else
#define OS "Not found"
#endif