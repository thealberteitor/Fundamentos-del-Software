#!/bin/bash

if [ "$#" -ne "2" ];
then
  echo "Número de parámetros incorrecto"
  exit 1
fi

if [ -f $1 ] && [ d $2 ];
then
  echo "Copiando..."
  cp $1 $2
else
  echo "No se puede copiar"
  exit 1
fi
