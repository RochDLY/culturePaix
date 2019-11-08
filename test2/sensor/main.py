# permet de recupérer les infos de l'arduino
# python -m pip install pyserial
# permet de chercher les fichiers sur l'ordinateur et de les lire
# python -m pip install Popen

"""
Réglages de vlc:
    Outils > Préférences > Vidéo > cocher Plein écran
    Outils > Préférences > Afficher les paramètres (tous) > Liste de lecture > cocher Lire et Quitter
    Outils > Préférences > Shous-titres et OSD > décocher Incruster le titre au démarrage
"""

import random
import subprocess
import os
import time
import serial

#Chemin vers le lecteur vidéo VLC
path_to_notepad = 'D:/Software/VLC/vlc.exe'
#Chemin vers le fichier à lire (vidéo)
path_file = 'C:/Users/rochd/Dropbox/ArTec_ArtCode_LAHOZ_2019/etudiants/roch/projet_maflohe/films/'
#Récupération des informations de l'arduino dans la variable ard
#ard = serial.Serial(' ttyACM0 ',9600,timeout=10)
#print(ard)

#Liste des lieux
lieu = ['Abidjan', 'Creteil', 'LeKremlin', 'Mada', 'Cuba', 'Hong_Kong']

# Booléen indiquant si vidéo est en curs de lecture (= True) ou pas (= False)
is_video_playing = False

index_lieu =  int(input('Choisir index lieu:'))



if is_video_playing == True:
    pass
else:
    #Liste des vidéos mp4
    if index_lieu == 1:
        num_video = 4
    else:
        num_video = 5

    video = [x for x in range(1,num_video)]

    #Choix random dans la liste
    index_video = random.choice(video)

    #TODO: liste qui mémorise les anciennes vidéos jouées

    #Création du chemin vers le fichier vidéo à lire
    path_to_file = path_file + lieu[index_lieu] + '/' + str(index_video) + ".mp4"
    print(path_to_file)
    #print(path_to_file)
    #subprocess.Popen([path_to_notepad, path_to_file], stdout=subprocess.PIPE)
    subprocess.run(path_to_file, shell=True)
    is_video_playing = True














"""
serial.inWaiting()
"""
"""
while 1:
    msg = str(ard.readline())
    path_to_file = path_to_file + video
    if a>2:
        if video_status==1:
            x.terminate()
        x = subprocess.Popen([path_to_notepad, path_to_file],stdout=subprocess.PIPE)

    #print("new")
#time.sleep(5)
"""
