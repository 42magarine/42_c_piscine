#! /bin/bash
ls -l | sed -n 'p;n'
# -n = no std output, p = print, n = next
