import os 
while True :
    cmnd = input()

    if "cd " in cmnd: 
        os.chdir(cmnd[3:])
        os.system("pwd")
    elif cmnd == "cd ..":
        os.chdir("..")
    else:
        os.system(cmnd)
