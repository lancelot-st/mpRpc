cmake_minimum_required(VERSION 3.0)
project(mprpc)

# 生成debug版本，可以gdb调试
set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_STANDARD 17)


# 项目可执行文件输出路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# 项目库文件输出路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# 头文件路径-I
include_directories(${PROJECT_SOURCE_DIR}/src/include)
include_directories(${PROJECT_SOURCE_DIR}/example)
include_directories(${PROJECT_SOURCE_DIR}/third/include)

# 库文件路径-L
link_directories(${PROJECT_SOURCE_DIR}/lib)
link_directories(${PROJECT_SOURCE_DIR}/third/lib)


# 包含mprpc框架所有代码
add_subdirectory(src)
# example包含mprpc框架使用的示例代码
add_subdirectory(example)