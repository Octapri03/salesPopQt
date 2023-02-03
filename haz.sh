#!/bin/bash
make clean
rm *.pro
qmake -project
fichero=$( ls *.pro )
echo "QT += widgets sql core" >> $fichero
echo "LIBS += -lpg
qmake
make

