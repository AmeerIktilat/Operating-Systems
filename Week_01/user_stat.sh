#!/bin/bash

if [ $# -lt 1 ]; then
    exit 1
fi

user_id=$(grep "^$1 " "users.txt" | head -n 1 | awk '{print $4}') 

if [ -z "$user_id" ]; then
    echo "User not found" 
    exit 1
fi

error_count=$(grep " ERROR " "raw_data.txt" | grep -c "ID: $user_id") 

echo "User: $1 | ID: $user_id | Total Errors: $error_count" 