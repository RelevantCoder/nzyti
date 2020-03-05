#!/bin/bash

sudo apt-get install dialog

dialog --menu  " || Welocome to Zorich installer ||" 25 40 25 "->" "install Zrich"
return_value=$?
case $return_value in 
        0)
            cd .. 
            cp main.o  ~/.zorich.o
            echo "alias zorich=\"~/.zorich.o\"" >> ~/.bashrc
	    echo "alias zorich=\"~/.zorich.o\"" >> ~/.zshrc
	    sleep 7
	    dialog --msgbox "zorich installed !\nThank's !!!" 27 40 	    
	    clear
esac
