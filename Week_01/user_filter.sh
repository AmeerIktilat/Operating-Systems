#!/bin/bash

if [ ! -f "users.txt" ]; then
    exit 1
fi

grep "Engineering" "users.txt" | grep "Admin" | awk '{print $1 "," $4 "," $5}' > "admins_list.csv"
chmod 600 "admins_list.csv" 

echo "Filter complete. File permissions updated." 