#!/bin/bash

HERE=$(pwd)

cd forth

FILES="core.zf dict.zf util.zf"

cat $FILES | $HERE/srcToArray.sh > ../nvramrc.h


