# culturePaix
Gestion du projet de Maflohé

[![forthebadge](http://forthebadge.com/images/badges/built-with-love.svg)](http://forthebadge.com)

Utilisation de capteurs piezo vibration sur une nappe interactive. Lorsque les capteurs sont déclenchés par le positionnement d'un avion
sur ces derniers, une vidéo aléatoire  - au sein d'une liste spécifique à chaque capteur - est projetée sur un écran via un vidéo-projecteur.

## Pour commencer

Il faut vérifier les différents branchements entre les capteurs, l'Arduino et la Raspberry Pi

## Démarrage

Lors de l'allumage du Raspberry, le programme doit se lancer automatiquement. 
Si non, ouvrir le terminal:
    - Taper la commande 'sudo nano /etc/rc.local'
    - Ajouter le code avant la ligne 'exit 0' : 'python /home/..../nom_du_programme.py
    - Appuyer sur CTRL-X
    - Confirmer avec O
    - Appuyer sur Entrée

## Fabriqué avec

* [Arduino.ino](https://www.arduino.cc/en/main/software) - Micro-contrôleur
* [Python3](https://www.python.org/) - Editeur de textes (IDLE)
* [Raspberry Pi](https://www.raspberrypi.org/) - Micro-ordinateur

## Auteurs

* **Roch Delannay** _alias_ [@RochDLY](https://github.com/RochDLY)

## License

Ce projet est sous licence ``GNU/GPL`` - voir le fichier [LICENSE.md](LICENSE.md) pour plus d'informations
