#include <iostream>
#include <fstream>
#include <string>
#include<stdint.h>
#include "./pb/test.pb.h"
#include<nlohmann/json.hpp>
#include <benchmark/benchmark.h>
#include "rapidjson/document.h"

using namespace std;
using json = nlohmann::json;

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

static void BM_JSON_SmallData(benchmark::State& state)
{
    json small_data;
    vector<int32_t> v;
    for(int i = 0 ; i < 1 ; i++)
    {
        json obj;
        obj["name"] = "hellohello";
        vector<int32_t> v;
        for(int j = 0 ; j < 5 ; j++)
        {
            v.push_back(j+100);
        }
        obj["mappings"] = v;
        small_data["list"].push_back(obj);
    }
    string ser_sd = small_data.dump();
    char* temp = &ser_sd[0];
    rapidjson::Document deser_sd;
    for(auto _ : state) {
        // json deser_sd = json::parse(ser_sd);
        deser_sd.Parse(temp);
    }
}
BENCHMARK(BM_JSON_SmallData);

static void BM_JSON_MediumData(benchmark::State& state)
{
    json medium_data;
    vector<int32_t> v;
    for(int i = 0 ; i < 10 ; i++)
    {
        json obj;
        obj["name"] = "hellohello";
        vector<int32_t> v;
        for(int j = 0 ; j < 10 ; j++)
        {
            v.push_back(j+100);
        }
        obj["mappings"] = v;
        medium_data["list"].push_back(obj);
    }
    string ser_md = medium_data.dump();
    const char* temp = &ser_md[0];
    rapidjson::Document deser_md;
    for(auto _ : state) {
        // json deser_md = json::parse(ser_md);
        deser_md.Parse(temp);
    }
}
BENCHMARK(BM_JSON_MediumData);

static void BM_JSON_LargeData(benchmark::State& state)
{
    json large_data;
    vector<int32_t> v;
    for(int i = 0 ; i < 100 ; i++)
    {
        json obj;
        obj["name"] = "hellohello";
        vector<int32_t> v;
        for(int j = 0 ; j < 100 ; j++)
        {
            v.push_back(j+100);
        }
        obj["mappings"] = v;
        large_data["list"].push_back(obj);
    }
    string ser_ld = large_data.dump();
    const char* temp = &ser_ld[0];
    rapidjson::Document deser_ld;
    for(auto _ : state) {
        // json deser_ld = json::parse(ser_ld);
        deser_ld.Parse(temp);
    }
}
BENCHMARK(BM_JSON_LargeData);


static void BM_Proto_SmallData(benchmark::State& state)
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
BENCHMARK(BM_Proto_SmallData);

static void BM_Proto_MediumData(benchmark::State& state)
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
BENCHMARK(BM_Proto_MediumData);

static void BM_Proto_LargeData(benchmark::State& state)
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
BENCHMARK(BM_Proto_LargeData);


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