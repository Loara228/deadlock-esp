#!/bin/bash

# Просто удобный запуск для отладки

clear
cargo build

read -p "continue (y/n)? " answer
case ${answer:0:1} in
    y|Y )
        # ./target/debug/app123 --dev
    ;;
    * )
        echo "k"
    ;;
esac