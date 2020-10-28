#include <iostream>
#include <fstream>
#include <string>
#include<stdint.h>
#include "./pb/test.pb.h"
#include <benchmark/benchmark.h>

using namespace std;

pb::ObjectList generate(int num_obj, int num_mappings)
{
    pb::ObjectList obj_list;
    for(int i = 0 ; i < num_obj ; i++)
    {
        pb::Object* obj = obj_list.add_list();
        obj->set_name("hellohello");
        for(int j = 0 ; j < num_mappings ; j++)
        {
            obj->add_mappings(int32_t(j));
        }
    }
    return obj_list;

}

static void BM_SmallData(benchmark::State& state)
{
    pb::ObjectList small_data;
    small_data = generate(1, 5);
    std::string ser_sd;
    small_data.SerializeToString(&ser_sd);
    pb::ObjectList deser_sd;
    for (auto _ : state) {
        deser_sd.ParseFromString(ser_sd);
    }
}
BENCHMARK(BM_SmallData);

static void BM_MediumData(benchmark::State& state)
{
    pb::ObjectList medium_data;
    medium_data = generate(10, 10);
    std::string ser_md;
    medium_data.SerializeToString(&ser_md);
    pb::ObjectList deser_md;
    for (auto _ : state) {
        deser_md.ParseFromString(ser_md);
    }
}
BENCHMARK(BM_MediumData);

static void BM_LargeData(benchmark::State& state)
{
    pb::ObjectList large_data;
    large_data = generate(100, 100);
    std::string ser_ld;
    large_data.SerializeToString(&ser_ld);
    pb::ObjectList deser_ld;
    for (auto _ : state) {
        deser_ld.ParseFromString(ser_ld);
    }
}
BENCHMARK(BM_LargeData);


BENCHMARK_MAIN();



//parsing desearilized objects; test is of type pb::ObjectList
// for(int i = 0 ; i < test.list_size() ; i++)
// {
//     pb::Object obj = test.list(i);
//     cout << obj.name();
//     for(int j = 0 ; j < obj.mappings_size() ; j++)
//     {
//         cout << obj.mappings(j);
//     }
//     cout << "\n";
// }