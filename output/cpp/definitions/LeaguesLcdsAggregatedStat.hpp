#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LeaguesLcdsAggregatedStat_t {
    float_t value;
    int32_t_t championId;
    uint64_t_t id;
    std::string_t statType;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsAggregatedStat_t& v) {
    j["value"] = v.value;
    j["championId"] = v.championId;
    j["id"] = v.id;
    j["statType"] = v.statType;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsAggregatedStat_t& v) {
    v.value = j.at("value").get<float_t>();
    v.championId = j.at("championId").get<int32_t_t>();
    v.id = j.at("id").get<uint64_t_t>();
    v.statType = j.at("statType").get<std::string_t>();
  }
  inline std::string to_string(const LeaguesLcdsAggregatedStat_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
