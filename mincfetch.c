#include<stdio.h>
#include<string.h>
#include<time.h>
#include<sys/sysinfo.h>
#include "config.h"

void printSep() {
    printf(ANSIRESET"========================================\n");
}

void displayFetch(){
    printf(ANSIRED"+++++yyyyyyyyyyyyyyyyyyyyyy\n");
    printf(ANSIBLUE"                        y+\n");
    printf(ANSIMAGENTA"                       y+\n");
    printf(ANSICYAN"                      y+\n");
    printf(ANSIYELLOW"                     y+\n");
    printf(ANSIGREEN"                    y+\n");
    printf(ANSIMAGENTA"                   y+\n");
    printf(ANSICYAN"                  y+\n");
    printf(ANSIRED"                 y+\n");
    printf(ANSIYELLOW"                y+\n");
    printf(ANSIGREEN"               y+\n");
    printf(ANSIMAGENTA"              y+\n");
    printf(ANSIBLUE"             y+\n");
    printf(ANSIRED"            y+\n");
    printf(ANSICYAN"           y+\n");
    printf(ANSIYELLOW"          y+\n");
    printf(ANSIGREEN"         y+\n");
    printf(ANSIMAGENTA"        y+\n");
    printf(ANSIBLUE"       y+\n");
    printf(ANSIYELLOW"      yyyyyyyyyyyyyyyyyyyyyy+++++\n");
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
