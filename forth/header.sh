#!/bin/bash 

set -x


FILES="core.zf dict.zf util.zf"

cat $FILES | srcToArray.sh > ./nvramrc.h


