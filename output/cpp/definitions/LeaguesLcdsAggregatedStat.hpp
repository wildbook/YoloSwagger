#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LeaguesLcdsAggregatedStat_t {
    float value;
    int32_t championId;
    uint64_t id;
    std::string statType;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsAggregatedStat_t& v) {
    j["value"] = v.value;
    j["championId"] = v.championId;
    j["id"] = v.id;
    j["statType"] = v.statType;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsAggregatedStat_t& v) {
    v.value = j.at("value").get<float>();
    v.championId = j.at("championId").get<int32_t>();
    v.id = j.at("id").get<uint64_t>();
    v.statType = j.at("statType").get<std::string>();
  }
  inline std::string to_string(const LeaguesLcdsAggregatedStat_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
