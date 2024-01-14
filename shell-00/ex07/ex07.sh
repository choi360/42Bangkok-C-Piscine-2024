#!/bin/sh
tar -xf ./resources.tar.gz
patch ./a -o ./b < ./sw.diff
diff ./a ./b > ./sw.diff2
diff ./sw.diff ./sw.diff2
