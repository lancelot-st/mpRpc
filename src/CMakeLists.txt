# 当前路径下的所有文件作为源文件,
# 添加新文件cmake出现build错误，因为新的文件未导致makefile更新
# 解决方法，1、删除build目录下的文件重新编译；2、在本文件添加或删除空行（产生改动）
aux_source_directory(. SRC_LIST)

# 生成静态库，因为muduo库是静态库
add_library(mprpc ${SRC_LIST})

# 连接muduo库，注意顺序，net在其他之前
target_link_libraries(mprpc muduo_net muduo_base pthread)
