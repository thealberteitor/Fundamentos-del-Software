#!/bin/bash

year=$(date +"%y")
month=$(date +"%m")
day=$(date +"%d")

if [ $# -lt 2 ] || [ $# -gt 3 ] || [ "$2" == "--ayuda" ];
then
  echo "--ayuda"
  exit 1
fi
if [ "$2" == "--alumno" ];
then
  nombre=`grep ^$(whoami) /etc/passwd | cut -d: -f5`
  grupo=`grep ^$(whoami) /etc/passwd | cut -d: -f4`
  echo $nombre $grupo
  exit 1
fi

if [ "$2" == "--copy" ]
then
  if [ -f $3 ] && ! [ -h $3 ]
  then
    echo "¿En el directorio hay $(ls -R | wc -l) archivos?"
    read x
    case $x in
      sí | si | yes | s | y ) echo "Creando Backup"
      mkdir backup_$year_$month_$day
      dir=$(echo "backup_$year_$month_$day")
    esac

    echo "Copiando el contenido del directorio $1 en $dir"
    cp -R $1 /tmp/$dir
  else
    dir=`grep ^$(whoami) /etc/passwd | cut -d: -f6`
    echo "No existe o no es un enlace, el directorio tiene que ser $dir"
fi
