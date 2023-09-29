#!/bin/bash

# Source directory (directory containing .c files)
source_dir="/root/alx-low_level_programming"

# Destination directory (your present working directory)
destination_dir="/root/alx-low_level_programming/0x09-static_libraries"

# Search for .c files in the source directory and copy them to the destination directory
find "$source_dir" -type f -name "*.c" -exec cp {} "$destination_dir" \;

echo "All .c files copied to $destination_dir"
