#include<stdio.h>
#include<string.h>
#include<time.h>
#include<sys/sysinfo.h>
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
    printf(ANSICYAN"%s\n", OS);
    printf(ANSIMAGENTA"%s",asctime(timeinfo));
    printf(ANSIGREEN"UP:%ld\n",info.uptime);
    printf(ANSIYELLOW"RAM:%ld\n"ANSIRESET,info.totalram);
}



void main() {
    
    displayFetch();
    printSep();
    inf();
}

