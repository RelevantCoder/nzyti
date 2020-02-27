#!/bin/bash

sudo apt-get install dialog

dialog --menu  " || Welocome to Zorich installer ||" 25 40 25 1 "installers"  2 "check python version"
case EXPRESSION in 
        1)
            cp -r ../main.py "$HOME"  
         ;;
esac