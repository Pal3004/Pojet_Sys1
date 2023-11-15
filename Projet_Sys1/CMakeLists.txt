cmake_minimum_required(VERSION 3.27)
project(Projet_Sys1_Paul_Louis_Songeur C)

set(CMAKE_C_STANDARD 99)

add_executable(Projet_Sys1_Paul_Louis_Songeur main.c
        exercices.h
        init.c
        ajout.c
        supprimer.c)
