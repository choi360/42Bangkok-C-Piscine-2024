#!/bin/sh
touch testShell00
printf "1234567890123456789012345678901234567890" > ./testShell00
touch -c -t 202306012342 testShell00
chmod 455 ./testShell00
