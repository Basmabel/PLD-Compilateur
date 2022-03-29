#!/bin/sh

set -e # Abort the script at the first error

######################################################################
# Preparation step

# sanity check
if [ $(basename $PWD) != "pld-comp" ]
then
    echo "error: this script must be executed from within your 'pld-comp' directory"
    exit 1
fi

# create the target directory for installation
mkdir antlr 

# create a fresh temp directory
mkdir antlr.tmp
cd antlr.tmp

#download both the tool jar and the cpp runtime
curl -O https://www.antlr.org/download/antlr-4.9.2-complete.jar
curl -O https://www.antlr.org/download/antlr4-cpp-runtime-4.9.2-source.zip

######################################################################
# Build step

unzip *.zip
mkdir build
cd build
cmake ..
make -j8

cd ../..

######################################################################
# install step

# tool jar 
mkdir antlr/jar
mv antlr.tmp/*.jar antlr/jar

# runtime header files
mkdir antlr/include

cd antlr.tmp/runtime/src
find * -type d -print -exec mkdir ../../../antlr/include/'{}' ';'
find . -name '*.h' -print -exec cp '{}' ../../../antlr/include/'{}' ';'
cd ../../..

# runtime library files
mkdir antlr/lib
mv antlr.tmp/dist/libantlr4-runtime.a antlr/lib

######################################################################
# cleanup step

rm -rf antlr.tmp

echo PLD COMP: ANTLR OK
