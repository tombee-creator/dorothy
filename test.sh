#!/usr/bin/env bash

make test

function try() {
    ./cpu $1
}

scripts=('test001' 'test002' 'test003')
ans=(3 55 3)

for i in $(seq 0 ${#scripts[@]}); do
    ./compiler script/${scripts[$i]}.txt bin/${scripts[$i]}
done

for i in $(seq 0 ${#scripts[@]}); do
    try bin/${scripts[$i]}.bin > txt/${scripts[$i]}.txt
    echo ${scripts[$i]}: $? == ${ans[$i]}
done

rm -rf a.out

