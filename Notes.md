#Notes

Login to raspberry
ssh pi@192.168.0.103

von raspberry auf eigenen PC
scp -r pi@192.168.103:/home/pi/project-wall-e ~/Documents/uni/applied-computer-vision

von PC auf raspberry -r bedeutet folder kopieren
scp -r ~/Documents/uni/applied-computer-vision/project-wall-e pi@192.168.103:/home/pi/project-wall-e


vnc viewer damit können wir im raspebrry eine ui anzeigen lassen

ssh pi@cvpi-13.local
damit kann man die IP Adresse bekommen