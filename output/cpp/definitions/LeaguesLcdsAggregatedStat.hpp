#ifndef SWAGGER_TYPES_LeaguesLcdsAggregatedStat_HPP
#define SWAGGER_TYPES_LeaguesLcdsAggregatedStat_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LeaguesLcdsAggregatedStat {
    // 
    float value;
    // 
    int32_t championId;
    // 
    uint64_t id;
    // 
    std::string statType;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsAggregatedStat& v) {
    j["value"] = v.value;
    j["championId"] = v.championId;
    j["id"] = v.id;
    j["statType"] = v.statType;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsAggregatedStat& v) {
    v.value = j.at("value").get<float>;
    v.championId = j.at("championId").get<int32_t>;
    v.id = j.at("id").get<uint64_t>;
    v.statType = j.at("statType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsAggregatedStat_HPP
