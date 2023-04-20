function try () {
    ./a.out > test.ll
    clang -w -o test test.ll
    ./test
    if [ $? = $2 ]; then
        echo "($1) OK"
    else
        printf "\e[31m($1) NG: $? != $2\e[m\n"
        return
    fi
}

make compile
try 1 11
try 2 12
`rm -rf test a.out test.ll`
