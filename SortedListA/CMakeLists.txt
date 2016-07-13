project(a5solution)

file(GLOB_RECURSE SOURCE_FILES "*.cpp")
file(GLOB_RECURSE HEADER_FILES "*.h")
add_library(SortedListA STATIC ${SOURCE_FILES} ${HEADER_FILES})