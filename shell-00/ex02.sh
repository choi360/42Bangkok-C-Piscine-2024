#!/bin/sh
mkdir ex02
cd ex02
mkdir test0
mkdir test2
touch test{1,3,4}
ln -s test0 test6
ln test3 test5
printf "1234" > ./test1
printf "1" > ./test3
printf "12" > ./test4
touch -t 202306012047 test0
touch -t 202306012146 test1
touch -t 202306012245 test2
touch -t 202306012344 test3
touch -t 202306012343 test4
touch -t 202306012344 test5
touch -h -t 202306012220 test6
chmod 715 ./test0
chmod 714 ./test1
chmod 504 ./test2
chmod 404 ./test3
chmod 641 ./test4
chmod -h 777 ./test6
