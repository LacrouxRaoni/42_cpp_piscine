#!/bin/bash

valgrind --leak-check=full --show-leak-kinds=all ./convert nan
echo 
valgrind --leak-check=full --show-leak-kinds=all ./convert nanf
echo 
valgrind --leak-check=full --show-leak-kinds=all ./convert +inf
echo 
valgrind --leak-check=full --show-leak-kinds=all ./convert +inff
echo 
valgrind --leak-check=full --show-leak-kinds=all ./convert -inf
echo 
valgrind --leak-check=full --show-leak-kinds=all ./convert -inff
echo 
echo "test 42"
valgrind --leak-check=full --show-leak-kinds=all ./convert 42
echo 
echo "test 42.0"
valgrind --leak-check=full --show-leak-kinds=all ./convert 42.0
echo 
echo "test 42.0f"
valgrind --leak-check=full --show-leak-kinds=all ./convert 42.0f
echo 
echo "test a"
valgrind --leak-check=full --show-leak-kinds=all ./convert a
echo
echo "test \\"
valgrind --leak-check=full --show-leak-kinds=all ./convert \\
echo 
echo
echo "test string"
valgrind --leak-check=full --show-leak-kinds=all ./convert Ze
echo 
echo "test max int"
valgrind --leak-check=full --show-leak-kinds=all ./convert 22222222222222222222
echo 
echo "test min int"
valgrind --leak-check=full --show-leak-kinds=all ./convert -3333333333333333333
echo 
echo "test -42.2f"
valgrind --leak-check=full --show-leak-kinds=all ./convert -42.2f
echo 
echo "test -42"
valgrind --leak-check=full --show-leak-kinds=all ./convert -42
echo 
echo "test -42.5"
valgrind --leak-check=full --show-leak-kinds=all ./convert -42.5
echo 
echo "test 42.55555555f"
valgrind --leak-check=full --show-leak-kinds=all ./convert 42.55555f
echo 
echo " test 42.55555555"
valgrind --leak-check=full --show-leak-kinds=all ./convert 42.55555
echo 
echo " test 0"
valgrind --leak-check=full --show-leak-kinds=all ./convert 0
echo 
echo " test 0.0000"
valgrind --leak-check=full --show-leak-kinds=all ./convert 0.0000
echo 
echo " test 0.00f"
valgrind --leak-check=full --show-leak-kinds=all ./convert 0.000f