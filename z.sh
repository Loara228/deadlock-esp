#!/bin/bash

cargo build

read -p "continue (y/n)? " answer
case ${answer:0:1} in
    y|Y )
        ./target/debug/aaa123  --offsets
    ;;
    * )
        echo "k"
    ;;
esac
