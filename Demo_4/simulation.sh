#!/bin/bash

cd build/
cmake ..
make
echo -e "\nmake project succesful!\n"
cd ../data
../build/bin/proceed all.pcap
echo -e "\ndata proceed succesful!\n"


