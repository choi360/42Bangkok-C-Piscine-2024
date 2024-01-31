#!/bin/sh
mkdir ex05
cd ex05
printf 42 > \"\\\?\$\*\'MaRViN\'\*\$\?\\\"
touch -t 202310021221 *MaRViN*
chmod 614 *MaRViN*
