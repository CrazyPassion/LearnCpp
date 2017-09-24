project(LearnCpp_run)

#set(HEADER_FILES
#        Include/Person.hpp
#        )
#
#set(SOURCE_FILES
#        Source/Person.cpp
#        )

#add_library(learncpp STATIC ${SOURCE_FILES} ${HEADER_FILES})

file(GLOB_RECURSE CH "*.[ch]")
file(GLOB_RECURSE CHPP "*.[ch]pp")
add_library(learncpp STATIC ${CH} ${CHPP})