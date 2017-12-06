#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LeaguesLcdsAggregatedStat_t {
    int32_t championId;
    uint64_t id;
    float value;
    std::string statType;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsAggregatedStat_t& v) {
    j["championId"] = v.championId;
    j["id"] = v.id;
    j["value"] = v.value;
    j["statType"] = v.statType;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsAggregatedStat_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.id = j.at("id").get<uint64_t>();
    v.value = j.at("value").get<float>();
    v.statType = j.at("statType").get<std::string>();
  }
}
