#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#define ANSIRED     "\x1b[31m"
#define ANSIGREEN   "\x1b[32m"
#define ANSIYELLOW  "\x1b[33m"
#define ANSIBLUE    "\x1b[34m"
#define ANSIMAGENTA "\x1b[35m"
#define ANSICYAN    "\x1b[36m"
#define ANSIRESET   "\x1b[0m"


#ifdef _WIN64
#define OS "Windows 64bit"

#elif _WIN32
#define OS "Windows 32bit"

#elif TARGET_OS_MAC
#define OS "MacOS"

#elif TARGET_OS_EMBEDDED
#define OS "iOS Embedded"

#elif TARGET_IPHONE_SIMULATOR 
#define OS "iOS Simulator"

#elif TARGET_OS_IPHONE
#define OS "iOS"

#elif __ANDROID__ 
#define OS "Android"

#elif __sun
#define OS "Solaris"

#elif __hpux
#define OS "HP UX"

#elif __DragonFly__
#define OS "DragonFly BSD"

#elif __FreeBSD__
#define OS "FreeBSD"

#elif __NetBSD__
#define OS "NetBSD"

#elif __OpenBSD__
#define OS "OpenBSD"

#elif __APPLE__
#define OS "Apple"

#elif __MACH__
#define OS "Apple"

#elif BSD
#define OS "BSD"

#elif __unix__ 
#define OS "Unix"

#elif __linux__
#define OS "Linux"
#include <sys/sysinfo.h>
#include <selinux/selinux.h>

#else
#define OS "Not found"
#endif

#ifdef _POSIX_VERSION
#define POSIXYESORNO "Yes"
#else
#define POSIXYESORNO "No"
#endif

void printSep() {
    printf(ANSIRESET"========================================\n");
}

void displayFetch(){
    char *logo = ANSIRED"+++++yyyyyyyyyyyyyyyyyyyyyy\n"
    ANSIBLUE"                        y+\n"
    ANSIMAGENTA"                       y+\n"
    ANSICYAN"                      y+\n"
    ANSIYELLOW"                     y+\n"
    ANSIGREEN"                    y+\n"
    ANSIMAGENTA"                   y+\n"
    ANSICYAN"                  y+\n"
    ANSIRED"                 y+\n"
    ANSIYELLOW"                y+\n"
    ANSIGREEN"               y+\n"
    ANSIMAGENTA"              y+\n"
    ANSIBLUE"             y+\n"
    ANSIRED"            y+\n"
    ANSICYAN"           y+\n"
    ANSIYELLOW"          y+\n"
    ANSIGREEN"         y+\n"
    ANSIMAGENTA"        y+\n"
    ANSIBLUE"       y+\n"
    ANSIYELLOW"      yyyyyyyyyyyyyyyyyyyyyy+++++\n";

  // Print the logo
  printf("%s", logo);
}

time_t rawtime;
struct tm * timeinfo;

void inf() {
time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    //struct sysinfo info;
    //sysinfo(&info);
    //int seclin = is_selinux_enabled();
    // ANSIBLUE
    //printf(ANSICYAN"%s@%s on %s\n", getenv("USER"), getenv("HOSTNAME"), OS);
    printf(ANSICYAN"%s\n", OS);
    printf(ANSIMAGENTA"%s",asctime(timeinfo));
    //printf(ANSIGREEN"UP:%ld\n",info.uptime);
    //printf(ANSIYELLOW"RAM:%ld\n",info.totalram);
    //printf(ANSIRED"SHELL:%s\n", getenv("SHELL"));
    //printf(ANSIBLUE"SELINUX:%d\n", seclin);
    //printf(ANSIBLUE"PATH:%s\n", getenv("PATH"));
    //printf(ANSICYAN"TERM:%s\n", getenv("TERM"));
    //printf(ANSIMAGENTA"COLORTERM:%s\n"ANSIRESET, getenv("COLORTERM"));
}



int main() {
    
    displayFetch();
    printSep();
    inf();
    return 0;
}

