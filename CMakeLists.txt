cmake_minimum_required(VERSION 3.20)
# set(CMAKE_C_STANDARD 89)
set(CMAKE_BUILD_TYPE Debug)
#project name
project(low_level C)

#clangd as out formatter
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#enabling C and GNU extensions
set(CMAKE_C_EXTENSIONS ON)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Files become a shared library
file (GLOB SHARED_SRC
  "_putschar.c"
  "binary_tree_print.c"
  "0-binary_tree_node.c"
  "1-binary_tree_insert_left.c"
  "2-binary_tree_insert_right.c"
  "3-binary_tree_delete.c"
  "4-binary_tree_is_leaf.c"
  "5-binary_tree_is_root.c"
  "6-binary_tree_preorder.c"
  "7-binary_tree_inorder.c"
  "8-binary_tree_postorder.c"
  "9-binary_tree_height.c"
  "10-binary_tree_depth.c"
  "11-binary_tree-size.c"
  "12-binary_tree_leaves.c"
  "13-binary_tree_nodes.c"
  "14-binary_tree_balance.c"
  "15-binary_tree_is_full.c"
  "16-binary_tree_is_perfect.c"
  "17-binary_tree_sibling.c"
  "18-binary_tree_uncle.c"
)
add_library(shared_lib STATIC ${SHARED_SRC})
# All main files needed
file(
  GLOB
  MAIN_FILES
 "*-main.c"
)
foreach(main_files ${MAIN_FILES})
  get_filename_component(target_name ${main_files} NAME_WE)
  add_executable(${target_name} ${main_files})

  target_link_libraries(${target_name} PRIVATE shared_lib)
  target_compile_options(${target_name} PRIVATE -Wall -pedantic -Werror -Wextra -g -std=gnu89 )
endforeach()
# target_include_directories(${PROJECT_NAME}PRIVATE ${CMAKE_SOURCE_DIR})
#compile flags for holberton requirements
