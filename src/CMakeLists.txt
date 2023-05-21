set(target ${MP2_LIBRARY})

file(GLOB hdrs "*.h*" "${MP2_INCLUDE}/*.h*")
file(GLOB srcs "*.cpp")
target_link_libraries(${target} ../../../antlr4/runtime/Cpp/build/bin/lib/antlr4-runtime-static)
add_executable(${target} ${srcs} ${hdrs})

