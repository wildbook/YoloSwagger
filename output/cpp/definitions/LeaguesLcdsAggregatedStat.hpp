#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LeaguesLcdsAggregatedStat_t {
    int32_t championId;
    uint64_t id;
    std::string statType;
    float value;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsAggregatedStat_t& v) {
    j["championId"] = v.championId;
    j["id"] = v.id;
    j["statType"] = v.statType;
    j["value"] = v.value;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsAggregatedStat_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.id = j.at("id").get<uint64_t>();
    v.statType = j.at("statType").get<std::string>();
    v.value = j.at("value").get<float>();
  }
}
