cmake_minimum_required(VERSION 2.8)
project(quikfast)

include_directories(src/)

file(GLOB Application_list "src/Application/*.cpp")
file(GLOB Codecs_list "src/Codecs/*.cpp")
file(GLOB Common_list "src/Common/*.cpp")
file(GLOB Communication_list "src/Communication/*.cpp")
file(GLOB Messages_list "src/Messages/*.cpp")

add_library(quickfast ${Application_list} ${Common_list} ${Communication_list} ${Codecs_list} ${Messages_list})
