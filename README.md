# nsgaii
Projet de NSGA II

#Git sans commande
En fait il existe un Tutorial qui est crée par défaut dans github (programme) et qui montre comment l'utiliser sans utiliser
les commandes. C'est beaucoup plus simple je trouve.
 - Créer une nouvelle branch pour ne pas travailler sur le master (en haut à gauche)
 - Faire des modification et les commits correspondants
 - Publish pour synchroniser avec sa version en ligne
 - Faire un Pull request pour proposer ses commits sur la version commune (en haut à droite)


#Commandes de Git:

Dans le master

git checkout -b xxxxxx  -> créer et entrer dans une branche

git status -> afficher les fichiers modifiés

git add nom_fichier.cpp -> prendre en compte la modification du fichier

git rm nom_fichier.cpp -> prendre en compte la suppression du fichier

git checkout nom_fichier.cpp -> restaurer le fichier ( c.à.d faire disparaître la modification )

git add . -> prendre en compte la modification de tous les fichiers modifiés ( pas la suppression )

git commit -> valider la branche et tu donnes un message et le sauvegardes. Pour simplifier la lecture sur Git, il faut écrire "done xxxxxx"  

git checkout master -> entrer dans la branche master

git pull origin master -> récupérer la version sur le serveur dans ton master

git checkout xxxxxx -> entrer dans la branche xxxxxx

git rebase master -> prendre les mises à jours du master dans la branche xxxxxx, cela peut donner des conflits.

git checkout master -> tu le sais 

git merge xxxxxx -> mettre à jour ton master en faisant la fusion avec la branche xxxxxx.

git push origin master -> Donner la nouvelle version au serveur
