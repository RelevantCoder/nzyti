# import os(os.system() for run cmnd in termX) and reader

import os
import sys

import rlcompleter, readline

# auto complete (arrow key (up & down))
def completer(text, state):

    options = [i for i in print("\n")+os.system("ls && echo ':: '") if i.startswith(text)]
    if state < len(options):

        return options

    else:

        return None



os.system("clear")

# frist logo loader

print("  ________  ____  ___ ____ _   _           __  ")

os.system("sleep 0.5")
print(" |__  / _ \|  _ \|_ _/ ___| | | |_____ ____\ \ ")

os.system("sleep 0.5")

print("   / / | | | |_) || | |   | |_| |_____|_____\ \\")

os.system("sleep 0.5")

print("\tauthored by amzy-0")

os.system("sleep 0.5")

print("  / /| |_| |  _ _ | | |___|  _  |_____|_____/ /")

os.system("sleep 0.5")

print(" /____\___/|_| \_\___\____|_| |_|          /_/ ")
os.system("sleep 0.5")


# load ended

while True:

    # logo

    print("  ________  ____  ___ ____ _   _           __  ")

    print(" |__  / _ \|  _ \|_ _/ ___| | | |_____ ____\ \ ")

    print("   / / | | | |_) || | |   | |_| |_____|_____\ \\")

    # get cmnd
    readline.set_completer(completer)
    readline.parse_and_bind("tab: complete")
    cmnd = input("==> ")
    # prompt
    cmnd = cmnd.strip()
    print("  / /| |_| |  _ _ | | |___|  _  |_____|_____/ /")

    print(" /____\___/|_| \_\___\____|_| |_|          /_/ ")


    if "cd " in cmnd:

        if cmnd == "cd . " or cmnd == "cd .":
            os.chdir(".")
            os.system("pwd")
            continue
        if cmnd[1:] == "cd" or cmnd == "cd ":
            os.chdir(os.path.expanduser("~"))
            os.system("pwd")
            continue

        elif cmnd == "cd .. " or cmnd == "cd ..":
            os.chdir("..")
            os.system("pwd")
            continue

        elif "~" in cmnd or cmnd[3:] == "":
            os.chdir(os.path.expanduser("~"))
            os.system("pwd")
            continue

        else:
            try:
                os.chdir(cmnd[3:])
                os.system("pwd")

            except:
                print("- termX--> :: No such files and directories !\n")
            continue

    elif cmnd == "ls":
    #    show files only
        print("==========file(s)============\n")
        os.system("ls -a -p | grep -v / | sort")

    #    show folder only
        print("==========Folder(s)==========\n")
        os.system("ls -a -d */ | sort")

    #    divider for end (ls)
        print("=============================\n")

        continue
    elif(int(os.system(cmnd))!= 0):

# if not cmnd TRUE print err for user

        print("termX--> :: Command not found !\n")



    else:
        #if TRUE
        os.system(cmnd)
# end
