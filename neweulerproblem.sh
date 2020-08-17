#!/bin/sh

echo creating problem dir $1

if mkdir $1 ; then
	echo $1 successfully created.
	cp Makefile ./$1
	touch $1/solver.cpp
else
	echo $1 NOT created.; exit 1 
fi
