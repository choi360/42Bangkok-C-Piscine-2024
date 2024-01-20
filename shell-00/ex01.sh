#!/bin/sh
mkdir ex01
cd ex01
touch testShell00
printf "1234567890123456789012345678901234567890" > ./testShell00
touch -c -t 202306012342 testShell00
chmod 455 ./testShell00
