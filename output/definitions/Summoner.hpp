#ifndef SWAGGER_TYPES_Summoner_HPP
#define SWAGGER_TYPES_Summoner_HPP
#include <json.hpp>
namespace test {
  // 
  struct Summoner {
'    // 
    uint64_t acctId;
    // 
    uint64_t sumId;
  };

  void to_json(nlohmann::json& j, const Summoner& v) {
    j["acctId"] = v.acctId;
    j["sumId"] = v.sumId;
  }

  void from_json(const nlohmann::json& j, Summoner& v) {
    v.acctId = j.at("acctId").get<uint64_t>;
    v.sumId = j.at("sumId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_Summoner_HPP
