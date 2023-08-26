add_library(point INTERFACE "")

target_sources(point
               PUBLIC
               ${CMAKE_CURRENT_LIST_DIR}/Point.hpp
               )