#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

// colors

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

// end of color zone

// cmnd len

#define CMND_LEN 1000

// end of cmnd len

int main(){
    char cmnd[CMND_LEN];
    /*
     *goto
     *home
     *dir
     */

    char* home = getenv("HOME");

    /*
     *clear
     *terminal
     */
    system("clear");

    /*
     *frist
     *logo
     *loader
     */
    printf("%s", KMAG);
    puts("  ________  ____  ___ ____ _   _           __  ");
    system("sleep 0.5");

    printf("%s",KRED);
    puts(" |__  / _ \\|  _ \\|_ _/ ___| | | |_____ ____\\ \\ ");
    system("sleep 0.5");

    printf("%s", KCYN);
    puts("   / / | | | |_) || | |   | |_| |_____|_____\\ \\");
    system("sleep 0.5");

    printf("%s", KYEL);
    puts("\tauthored by amzy-0");
    system("sleep 0.5");

    printf("%s", KGRN);
    puts("  / /| |_| |  _ _ | | |___|  _  |_____|_____/ /");
    system("sleep 0.5");

    printf("%s", KBLU);
    puts(" /____\\___/|_| \\_\\___\\____|_| |_|          /_/ ");
    system("sleep 2");
    system("clear");


    while(1){
        puts(KRED);
        puts("  ________  ____  ___ ____ _   _           __  ");
        puts(" |__  / _ \\|  _ \\|_ _/ ___| | | |_____ ____\\ \\ ");
        puts("   / / | | | |_) || | |   | |_| |_____|_____\\ \\");
        // prompt
        printf("%s", KWHT);
        printf("%s\t::-->%s ", KRED, KWHT);
        scanf("%s", cmnd);
        printf("%s", KRED);;
        puts("\n  / /| |_| |  _ _ | | |___|  _  |_____|_____/ /");
        puts(" /____\\___/|_| \\_\\___\\____|_| |_|          /_/ ");
        // get command
        /*
        *goto
        *newline
        *puts("");
        */

        puts("");

        /*
        *cmnd
        *goto posix std
        */
        if(strcmp(cmnd , "ls") == 0){
            /*
             *Files
             *in
             *the
             *list
             */

            puts(KBLU);
            puts("================File(s)================");
            puts(KGRN);
            system("ls -a -p | grep -v / | sort");
            puts(KBLU);
            puts("=======================================");

            /*
             *Directories
             *in
             *list
             */

            puts("=============Directories(s)============");
            puts(KYEL);
            system("ls -d */ | sort");
            puts(KBLU);
            puts("=======================================");
        }
        /*
         *if
         *cmnd
         *is
         *clear
         */
        else if(strcmp(cmnd , "clear") == 0){
            system("clear");
        }

        // cd ..

        else if (strcmp(cmnd , "..")==0){
            chdir("..");
        }

        // goto home Directory

        else if(strcmp(cmnd ,"~")==0){
            chdir(home);
        }

        // goto root {'cd /'}

        else if(strcmp(cmnd ,"/")==0){
            chdir("/");
        }

        /*
         *if
         *not
         *cmnd
         *in
         *up
         *struct
         */

        else {
            if (strcmp(cmnd , "cd ")) {
              /*
               *chdir()
               *goto user Directory
               */
              chdir(cmnd);
            }
            else{

              system(cmnd);
            }
        }
    }
}
