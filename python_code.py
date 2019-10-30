#python -m pip install pyserial
#python -m pip install Popen
import subprocess
import os
import time
import serial

ard = serial.Serial(' ttyACM0 ',9600,timeout=10)
video_status = 0
#serial.inWaiting()
while 1:
    msg = str(ard.readline())
    video = msg[2:7]
    print(msg)
    print(video)
    print(len(video))
    path_to_file = path_to_file + video
    a = len(video)
    path_to_notepad = 'menu://applications//Son et vidéo//vlc.exe'
    path_to_file ='//home//pi/Bureau//Videos test projet'
    if a>2:
        if video_status==1:
            x.terminate()
        x = subprocess.Popen([path_to_notepad, path_to_file],stdout=subprocess.PIPE)
        video_status=1
    #print("new")
#time.sleep(5)



