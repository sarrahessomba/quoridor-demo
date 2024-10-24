cmake_minimum_required(VERSION 3.29)
project(Quoridor C)

set(CMAKE_C_STANDARD 11)

add_executable(Quoridor main.c
        Menu.c
        menu.h
        menu_joueur.c
        joueurs.h)
