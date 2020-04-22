AIA_n4s_2019
===

![presentation](https://github.com/Clement-Muth/AIA_n4s_2019/blob/master/documents/readme/img/mario-kart-presentation.png)

Comment utiliser le programme ?
- Make
- ./ai

COPPELIASIM
===
+ QU'EST-CE QUE C'EST ?

    CoppeliaSim est un simulateur créé par Coppelia Robotics. Il permet la création et le contrôle de robots.
    Pour ce projet, une piste virtuelle et une voiture on été construit pour implémenter l'IA.

+ INSTALLATION
    
    Pour le télécharger, cliquez ici [Coppeliasim](https://www.coppeliarobotics.com/files/CoppeliaSim_Edu_V4_0_0_Ubuntu18_04.tar.xz)
    Ensuite, executez la command: <br/>

    ```bash
    cmuth@debian:~/AIA_n4s_2019$ ./vrep.sh
    ```
+ SCENE

    Cliquez ici pour télécharger le [package](https://intra.epitech.eu/module/2019/B-AIA-200/STG-2-1/acti-377224/project/file/B-AIA-200_n4s_package.tgz)
    Divers fichiers «.ttt» se trouvent dans le fichier «scène». Ce sont les fichiers que CoppeliaSim utilise pour
    enregistrez les simulations de scène.
    En ce qui nous concerne, ils contiennent la piste et la voiture à conduire.
    Avant de commencer vos simulations, vous devez systématiquement ouvrir la scène track_1.ttt (ou toutes les autres scènes
    que vous avez fait vous-même) qui se trouve dans le CoppeliaSim (glisser-déposer ou via le "Fichier> Ouvrir la scène ..."
    menu).

API
===
+ QU'EST-CE QUE C'EST ?

    Une API (nom binaire: n4s). Il s'agit d'une interface de communication qui offre un éventail d'actions que vous pouvez
    utilisation (lancer une simulation, régler la vitesse du moteur de la voiture, l'angle de roue, ...). Vous pouvez également l'utiliser seul pour
    pour tester le protocole de communication sur la ligne de commande.
     
+ FONCTIONNEMENT GLOBAL
    
    Le binaire n4s permet la communication avec CoppeliaSim (via une prise en C) et contrôle chacun des éléments
    que nous avons mis dans notre scène.
    Il lit les commandes qui lui sont envoyées sur l'entrée standard, exécute la tâche et répond en écrivant sur la
    sortie standard.
    Votre binaire devra donc faire le contraire: donner ses commandes en écrivant sur la sortie standard
    et recevez les réponses n4s en les lisant sur votre entrée standard.
    La commande du script pipes.sh vous permet de lier correctement les différents binaires. Vous devrez exécuter
    le script pipes.sh pour lancer la simulation et voir comment elle interagit avec votre IA. Nous verrons le script juste après.
      
+ LES COMMANDES
    
    La communication se fait via un protocole de type texte:<br/><br/>
    ![presentation](https://github.com/Clement-Muth/AIA_n4s_2019/blob/master/documents/readme/img/command-table.png)
    
    Par exemple, CAR_FORWARD prend un paramètre qui indique la puissance du moteur que vous souhaitez conduire
    avec (et non pas une vitesse absolue):
    CAR_FORWARD: 0,5 \ nm fait avancer la voiture à la moitié de sa vitesse maximale.

+ LES REPONSES

    Voici les différents formats de réponse, correspondant à chaque type:
        
        • (1): VALUE_ID:STATUS:CODE_STR:ADDITIONNAL_INFO
        • (2): VALUE_ID:STATUS:CODE_STR[:float]*32:ADDITIONNAL_INFO
        • (3): VALUE_ID:STATUS:CODE_STR:float:ADDITIONNAL_INFO
        • (4): VALUE_ID:STATUS:CODE_STR:[long,long]:ADDITIONNAL_INFO

    __VALUE_ID__ indicates the response code. The different values are listed below.<br/>
    __STATUS__ is whether “OK” or “KO”. It indicates if the command execution is a success or a failure.<br/>
    __CODE_STR__ corresponds to the verbal version of VALUE_ID. The different values are also listed below.<br/>
    __ADDITIONAL_INFO__ can contain information concerning the last checkpoint passed on the track (followed
    by the id of this checkpoint and the passage timestamp). The four different types of checkpoints are as
    follows:

    ![presentation](https://github.com/Clement-Muth/AIA_n4s_2019/blob/master/documents/readme/img/reponse-table.png)

VALUE_ID/CODE_STR correspondance:
    ![presentation](https://github.com/Clement-Muth/AIA_n4s_2019/blob/master/documents/readme/img/correspondance-table.png)

SCRIPT
===
+ QU'EST-CE QUE C'EST ?
    
    Un script shell (nom binaire: pipes.sh) vous permet de connecter votre programme à l'API et de lancer la    
    simulations. C'est un binaire que vous exécuterez afin de tester votre IA.
