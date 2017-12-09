#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LeaguesLcdsAggregatedStat_t {
    std::string statType;
    int32_t championId;
    float value;
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsAggregatedStat_t& v) {
    j["statType"] = v.statType;
    j["championId"] = v.championId;
    j["value"] = v.value;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsAggregatedStat_t& v) {
    v.statType = j.at("statType").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
    v.value = j.at("value").get<float>();
    v.id = j.at("id").get<uint64_t>();
  }
  inline std::string to_string(const LeaguesLcdsAggregatedStat_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
