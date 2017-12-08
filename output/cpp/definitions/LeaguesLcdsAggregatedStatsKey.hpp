#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LeaguesLcdsAggregatedStatsKey_t {
    std::string_t gameMode;
    uint64_t_t userId;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsAggregatedStatsKey_t& v) {
    j["gameMode"] = v.gameMode;
    j["userId"] = v.userId;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsAggregatedStatsKey_t& v) {
    v.gameMode = j.at("gameMode").get<std::string_t>();
    v.userId = j.at("userId").get<uint64_t_t>();
  }
  inline std::string to_string(const LeaguesLcdsAggregatedStatsKey_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
