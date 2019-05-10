/*************************************************************************
  > File Name: test_writer.cpp
  > Author: xiangfei.cui
  > Mail: xiangfei.cui@alibaba-inc.com
  > Created Time: Mon 17 Dec 2018 04:45:07 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#include <json/json.h>

int main()
{
    Json::Value event;   
    Json::Value vec(Json::arrayValue);
    vec.append(Json::Value(1));
    vec.append(Json::Value(2));
    vec.append(Json::Value(3));

    unsigned long long ull = 1234;

    event["competitors"]["home"]["name"] = "Liverpool";
    event["competitors"]["away"]["code"] = 89223;
    event["competitors"]["away"]["name"] = "Aston Villa";
    event["competitors"]["away"]["code"]=vec;

    /* Json::Value 没有对 unsigned long long 的构造函数 */
    //event["ull"] = ull;

    std::cout << event << std::endl;

}
