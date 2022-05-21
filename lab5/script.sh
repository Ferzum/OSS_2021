#!/bin/bash
ps axo uid,euid,cmd | grep -v CMD | awk '{if ( != ) printf }'
