#include<stdio.h>
#include <string.h>
#include <time.h>
#include <sys/sysinfo.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

char operating_system[20];
time_t rawtime;
struct tm * timeinfo;
long int sytem_uptime;
unsigned long machine_ram;

int DetectOs() {
    
    #ifdef __linux__
    strcpy(operating_system, "Linux");
    #elif __APPLE__
    strcpy(operating_system, "MacOs");
    #elif __ANDROID__ 
    strcpy(operating_system, "Android");
    #elif __unix__ 
    strcpy(operating_system, "Unix");
    #elif _POSIX_VERSION
    strcpy(operating_system, "Posix");
    #elif BSD
    strcpy(operating_system, "BSD");
    #else
    strcpy(operating_system, "Not found");
    #endif
    return 0;
}

void RESUM() {
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    struct sysinfo info;
    sysinfo(&info);
    long int sytem_uptime = info.uptime;
    unsigned long machine_ram = info.totalram;
    printf(ANSI_COLOR_RED"+++++yyyyyyyyyyyyyyyyyyyyyy\n");
    printf(ANSI_COLOR_BLUE"                        y+\n");
    printf(ANSI_COLOR_MAGENTA"                       y+\n");
    printf(ANSI_COLOR_CYAN"                      y+\n");
    printf(ANSI_COLOR_YELLOW"                     y+\n");
    printf(ANSI_COLOR_GREEN"                    y+\n");
    printf(ANSI_COLOR_MAGENTA"                   y+\n");
    printf(ANSI_COLOR_CYAN"                  y+\n");
    printf(ANSI_COLOR_RED"                 y+              OS: %s\n", operating_system);
    printf(ANSI_COLOR_YELLOW"                y+               Time: %s", asctime(timeinfo));
    printf(ANSI_COLOR_GREEN"               y+                Uptime: %ld\n", sytem_uptime);
    printf(ANSI_COLOR_MAGENTA"              y+                 RAM: %lu\n", machine_ram);
    printf(ANSI_COLOR_BLUE"             y+\n");
    printf(ANSI_COLOR_RED"            y+\n");
    printf(ANSI_COLOR_CYAN"           y+\n");
    printf(ANSI_COLOR_YELLOW"          y+\n");
    printf(ANSI_COLOR_GREEN"         y+\n");
    printf(ANSI_COLOR_MAGENTA"        y+\n");
    printf(ANSI_COLOR_BLUE"       y+\n");
    printf(ANSI_COLOR_YELLOW"      yyyyyyyyyyyyyyyyyyyyyy+++++\n");
}

int main() {
    DetectOs();
    RESUM();
   return 0;
}