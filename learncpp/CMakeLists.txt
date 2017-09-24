project(LearnCpp_run)

set(HEADER_FILES
        Include/Person.hpp
        )

set(SOURCE_FILES
        Source/Person.cpp
        )

add_library(learncpp STATIC ${SOURCE_FILES} ${HEADER_FILES})