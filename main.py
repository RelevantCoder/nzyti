# import os(os.system() for run cmnd in termX) and reader

import os
import sys

import rlcompleter, readline

# auto complete (arrow key (up & down))
def completer(text, state):

    options = [i for i in os.system("ls")  if i.startswith(text)]
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
print("  ________  ____  ___ ____ _   _           __  ")

print(" |__  / _ \|  _ \|_ _/ ___| | | |_____ ____\ \ ")

print("   / / | | | |_) || | |   | |_| |_____|_____\ \\")

# get cmnd
readline.parse_and_bind("tab: complete")
readline.set_completer(completer)
# prompt
cmnd = input("==> ")

print("  / /| |_| |  _ _ | | |___|  _  |_____|_____/ /")

print(" /____\___/|_| \_\___\____|_| |_|          /_/ ")
# load ended

while cmnd != EOF :

    # logo

    print("  ________  ____  ___ ____ _   _           __  ")

    print(" |__  / _ \|  _ \|_ _/ ___| | | |_____ ____\ \ ")

    print("   / / | | | |_) || | |   | |_| |_____|_____\ \\")

    # get cmnd
    readline.parse_and_bind("tab: complete")
    readline.set_completer(completer)
    # prompt
    cmnd = input("==> ")

    print("  / /| |_| |  _ _ | | |___|  _  |_____|_____/ /")

    print(" /____\___/|_| \_\___\____|_| |_|          /_/ ")


    if "cd " in cmnd:

        if cmnd == "cd . " or cmnd == "cd .":
            os.chdir(".")
            os.system("pwd")
            continue
        if cmnd == "cd" or cmnd == "cd ":
            os.chdir(os.path.expanduser("~"))
            os.system("pwd")
            continue

        elif cmnd == "cd .. " or cmnd == "cd ..":
            os.chdir("..")
            os.system("pwd")
            continue

        elif "~" in cmnd:
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

    else:

# if cmnd is command run this

        if os.system(cmnd) == 0 :
            os.system(cmnd);

# if not print err for user

        else:
            print("termX--> :: Command not found !\n")

# end
