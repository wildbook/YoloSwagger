#ifndef SWAGGER_TYPES_LeaguesLcdsAggregatedStat_HPP
#define SWAGGER_TYPES_LeaguesLcdsAggregatedStat_HPP
#include <json.hpp>
namespace test {
  // 
  struct LeaguesLcdsAggregatedStat {
'    // 
    int32_t championId;
    // 
    uint64_t id;
    // 
    std::string statType;
    // 
    float value;
  };

  void to_json(nlohmann::json& j, const LeaguesLcdsAggregatedStat& v) {
    j["championId"] = v.championId;
    j["id"] = v.id;
    j["statType"] = v.statType;
    j["value"] = v.value;
  }

  void from_json(const nlohmann::json& j, LeaguesLcdsAggregatedStat& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.id = j.at("id").get<uint64_t>;
    v.statType = j.at("statType").get<std::string>;
    v.value = j.at("value").get<float>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsAggregatedStat_HPP
