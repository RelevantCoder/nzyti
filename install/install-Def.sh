#!/bin/bash

sudo apt-get install dialog

dialog --menu  "      || Welocome to Zorich installer ||" 25 50 25 "->" "install Zrich to be your DEFAULT shell !"
return_value=$?
case $return_value in 
        0)
            cd .. 
            cp main.o ~/.zorich.o
            echo "alias zorich=\"~/.zorich.o\"" >> ~/.bashrc
            echo "zorich" >> ~/.bashrc

	    echo "alias zorich=\"~/.zorich.o\"" >> ~/.zshrc
	    echo "zorich" >> ~/.zshrc
	    sleep 7
	    dialog --msgbox "zorich installed !\nThank's !!!" 27 40 	    
	    clear
esac
