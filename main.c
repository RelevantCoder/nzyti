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
    char *cmndSwp;
    /*
     *goto
     *home
     *and any in (Default) Directories
     *dir
     */

    char* home = getenv("HOME");
    char* root = getenv("ROOT");

    /*
     *clear
     *the
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
    // get command

    while(1){
        puts(KRED);
        puts(" ________  ____  ___ ____ _   _           __  ");
        puts("|__  / _ \\|  _ \\|_ _/ ___| | | |_____ ____\\ \\ ");
        puts("  / / | | | |_) || | |   | |_| |_____|_____\\ \\");
        // prompt
        printf("%s", KRED);
        system("pwd");

        printf("%s", KWHT);
        printf("%s:>%s ", KRED, KWHT);

        scanf("%[^\n]%*c", cmnd);
        cmndSwp = cmnd;
        printf("\n%s\n%s", cmndSwp, KRED); 
        puts("\n / /| |_| |  _ _ | | |___|  _  |_____|_____/ /");
        puts("/____\\___/|_| \\_\\___\\____|_| |_|          /_/ ");
        /*
        *newline
        *goto
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
            continue;

        }
        /*
         *if
         *cmnd
         *is
         *clear
         */
        else if(strcmp(cmnd , "clear") == 0){
            system("clear");
    
            continue;
    
        }

        // cd ..

        else if (strcmp(cmnd , "..")==0 || strcmp(cmnd , "cd ..")==0){
            chdir("..");
            continue;
    
        }
        else if (strcmp(cmnd , "cd .. ")==0){
            chdir("..");
            continue;
    
        }

        // goto root {'cd /'}

        else if(strcmp(cmnd ,"/")==0 || strcmp(cmnd , "cd /")==0){
            chdir(root);
            continue;
    
        }

        // goto home Directory

        else if(strcmp(cmnd ,"~")==0 || strcmp(cmnd , "cd ~")==0 ){
            chdir(home);
            continue;
    
        }


        else if(strcmp(cmnd , "Desktop")==0 || strcmp(cmnd , "desktop")==0){
          chdir(home);
          chdir("Desktop");
            continue;
    

        }
        else if(strcmp(cmnd , "Documents")==0 || strcmp(cmnd , "documents")==0){
          chdir(home);
          chdir("Documents");
          continue;
    

        }
        else if(strcmp(cmnd , "Videos")==0 || strcmp(cmnd , "videos")==0){
          chdir(home);
          chdir("Videos");
          continue;
    
        }
        else if(strcmp(cmnd , "Templates")==0 || strcmp(cmnd , "templates")==0){
          chdir(home);
          chdir("Templates");
          continue;
    
        }
        else if(strcmp(cmnd , "Public")==0 || strcmp(cmnd , "public")==0){
          chdir(home);
          chdir("Public");
          continue;
    
        }
        else if(strcmp(cmnd , "Pictures")==0 || strcmp(cmnd , "pictures")==0){
          chdir(home);
          chdir("Pictures");
          continue;
        
        }
        else if(strcmp(cmnd , "pwd")==0){
          system("clear");
          printf("%spath :> \n" ,KGRN );
          system("pwd");
          system("sleep 1");
          continue;
        }
        
        /*
         *if
         *not
         *cmnd
         *in
         *up
         *struct
         */

        else if (strcmp(cmnd  , "cd ")){
          char dir[CMND_LEN];
              puts("im in !\n");
              int i , n , j;
              j = 0;
              n = strlen(cmnd)+1;
              printf("%d \n", n);
              for ( i = 3; i < n ; i++){
                  {
                    dir[j] = cmnd[i];
                    printf("%c\n" , dir[j]);
                    j++;
                    
                  }
                  chdir(dir);
                    continue;

              }
              
           system(cmnd);
            continue;
        }
    }
}
