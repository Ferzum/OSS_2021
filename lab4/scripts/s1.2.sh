#!/bin/bash

ls -al /home/$USER | grep -e "*.txt$" | wc -l
