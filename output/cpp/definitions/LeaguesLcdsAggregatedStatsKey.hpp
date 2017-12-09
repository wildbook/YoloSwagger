#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LeaguesLcdsAggregatedStatsKey_t {
    uint64_t userId;
    std::string gameMode;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsAggregatedStatsKey_t& v) {
    j["userId"] = v.userId;
    j["gameMode"] = v.gameMode;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsAggregatedStatsKey_t& v) {
    v.userId = j.at("userId").get<uint64_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
  }
  inline std::string to_string(const LeaguesLcdsAggregatedStatsKey_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
