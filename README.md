## to run go benchmarks
1. cd json_vs_proto
1. go test --bench=.

## to run cpp benchmarks
1. cd json_vs_proto
1. Install [google benchmarks](https://github.com/google/benchmark)
1. Install [nlohmann/json](https://github.com/nlohmann/json)
1. Install [rapidjson](https://github.com/Tencent/rapidjson/)
1. g++ -std=c++11 -Weverything -isystem benchmark/include  proto_test.cpp ./pb/test.pb.cc -lprotobuf -lpthread -lbenchmark
1. ./a.out
