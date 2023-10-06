#include<stdio.h>
#include<string.h>
#include<time.h>
#include<sys/sysinfo.h>
#include <stdlib.h>
#include "config.h"

time_t rawtime;
struct tm * timeinfo;
long int SytemUptime;
unsigned long MachRam;
char usr[] = system("whoami")

void main() {
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    struct sysinfo info;
    sysinfo(&info);
    long int SytemUptime = info.uptime;
    unsigned long MachRam = info.totalram;
    printf(ANSIRED"+++++yyyyyyyyyyyyyyyyyyyyyy\n");
    printf(ANSIBLUE"                        y+\n");
    printf(ANSIMAGENTA"                       y+\n");
    printf(ANSICYAN"                      y+\n");
    printf(ANSIYELLOW"                     y+\n");
    printf(ANSIGREEN"                    y+\n");
    printf(ANSIMAGENTA"                   y+\n");
    printf(ANSICYAN"                  y+\n");
    printf(ANSIRED"                 y+              OS: %s\n", OS);
    printf(ANSIYELLOW"                y+               Time: %s", asctime(timeinfo));
    printf(ANSIGREEN"               y+                Uptime: %ld\n", SytemUptime);
    printf(ANSIMAGENTA"              y+                 RAM: %lu\n", MachRam);
    printf(ANSIBLUE"             y+\n");
    printf(ANSIRED"            y+\n");
    printf(ANSICYAN"           y+\n");
    printf(ANSIYELLOW"          y+\n");
    printf(ANSIGREEN"         y+\n");
    printf(ANSIMAGENTA"        y+\n");
    printf(ANSIBLUE"       y+\n");
    printf(ANSIYELLOW"      yyyyyyyyyyyyyyyyyyyyyy+++++\n");
}
