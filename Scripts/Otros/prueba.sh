#!/bin/bash

if [ "$#" -ne "1" ];
then
  echo "Número de parámetros incorrecto"
  exit 1
fi

if [ -d $1 ];
then
  echo si;
else
  echo no;
fi


#if test -d /bin == if [ -d /bin ]
