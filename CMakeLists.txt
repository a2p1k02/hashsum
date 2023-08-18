cmake_minimum_required(VERSION 3.10)

project(hashsum VERSION 1.0 DESCRIPTION "Simple library for CRC hashsums")

add_executable(hashsum src/main.cpp src/crc16.h src/crc32.h)
