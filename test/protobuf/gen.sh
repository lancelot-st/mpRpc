protoc test.proto --cpp_out=./

g++ main.cc test.pb.cc -lprotobuf -lpthread

