#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/sysinfo.h>
#include <selinux/selinux.h>
#include "config.h"

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
    struct sysinfo info;
    sysinfo(&info);
    int seclin = is_selinux_enabled();
    // ANSIBLUE
    printf(ANSICYAN"%s@%s on %s\n", getenv("USER"), getenv("HOSTNAME"), OS);
    printf(ANSIMAGENTA"%s",asctime(timeinfo));
    printf(ANSIGREEN"UP:%ld\n",info.uptime);
    printf(ANSIYELLOW"RAM:%ld\n",info.totalram);
    printf(ANSIRED"SHELL:%s\n", getenv("SHELL"));
    printf(ANSIBLUE"SELINUX:%d\n", seclin);
    //printf(ANSIBLUE"PATH:%s\n", getenv("PATH"));
    //printf(ANSICYAN"TERM:%s\n", getenv("TERM"));
    //printf(ANSIMAGENTA"COLORTERM:%s\n"ANSIRESET, getenv("COLORTERM"));
}



void main() {
    
    displayFetch();
    printSep();
    inf();
}

