#!/bin/bash

if [ $# -lt 1 ]; then
    exit 1
fi

if [ ! -f "$1" ]; then
    echo "File not found" 
    exit 1
fi

ids=$(grep -E "ERROR|ATTACK" "$1" | cut -d' ' -f4 | cut -d':' -f2 | sort -rn | uniq) 

if [ -n "$ids" ]; then
    echo "$ids"
fi

count=$(echo "$ids" | grep -c "^")
echo "Summary: $count unique incidents found." 