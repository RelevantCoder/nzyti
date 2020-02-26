import os 
while 1==1 :
    cmnd = input("termX--> ")

    if "cd " in cmnd: 
        os.chdir(cmnd[3:])
        os.system("pwd")
    elif cmnd == "..":
        os.chdir("..")
    elif cmnd == "ls":
        print("==========file(s)============\n")
        os.system("ls -a -p | grep -v / ")
        print("==========Folder(s)==========\n")
        os.system("ls -d */ ")
        print("=============================\n")
    else:
        os.system(cmnd)

