cmake_minimum_required(VERSION 3.29)
project(Examen_C_)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Examen_C_
    Main.cpp
    Main.h
        "Ejercicio 4/Promocion.h"
        "Ejercicio 3/Promedio.cpp"
        "Ejercicio 2/dia.cpp"
        "Ejercicio 1/Identificacion.cpp"
        "Ejercicio 4/Promocion.cpp")
