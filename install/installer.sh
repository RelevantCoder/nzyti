#!/bin/bash

sudo apt-get install dialog
sudo dnf install dialog 
sudo yum install dialog
sudo zipper install dialog
sudo pkg install dialog 
clear

dialog --menu  " || Welocome to Nzyti installer ||" 25 40 25 "->" "install Nzyti"
return_value=$?
case $return_value in 
        0)
            cd .. 
            cp main.o  ~/.nzyti.o
            echo "alias nzyti=\"~/.nzyti.o\"" >> ~/.bashrc
	    echo "alias nzyti=\"~/.nzyti.o\"" >> ~/.zshrc
	    sleep 7
	    dialog --msgbox "Nzyti installed !\nThank's !!!" 27 40 	    
	    clear
esac
