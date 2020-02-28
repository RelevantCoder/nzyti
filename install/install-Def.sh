#!/bin/bash

sudo apt-get install dialog

dialog --menu  "      || Welocome to Zorich installer ||" 25 50 25 "->" "install Zrich to be your DEFAULT shell !"
return_value=$?
case $return_value in 
        0)
            cd .. 
            cp main.py ~/.zorich.py
            echo "alias zorich=\"python3 ~/.zorich.py\"" >> ~/.bashrc
            echo "zorich" >> ~/.bashrc

	    echo "alias zorich=\"python3 ~/.zorich.py\"" >> ~/.zshrc
	    echo "zorich" >> ~/.zshrc
	    sleep 7
	    dialog --msgbox "zorich installed !\nThank's !!!" 27 40 	    
	    clear
esac
