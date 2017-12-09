#pragma once
#include <json.hpp>
#include <optional>
#include "RosterPeriodAggregatedStatsDTO.hpp"
#include "RosterPlayerAggregatedStatsDTO.hpp"
namespace leagueapi {
  struct RosterAggregatedStatsDTO_t {
    std::map<std::string, RosterPlayerAggregatedStatsDTO_t> playerStats;
    std::vector<RosterPeriodAggregatedStatsDTO_t> periodStats;
  };

  inline void to_json(nlohmann::json& j, const RosterAggregatedStatsDTO_t& v) {
    j["playerStats"] = v.playerStats;
    j["periodStats"] = v.periodStats;
  }

  inline void from_json(const nlohmann::json& j, RosterAggregatedStatsDTO_t& v) {
    v.playerStats = j.at("playerStats").get<std::map<std::string, RosterPlayerAggregatedStatsDTO_t>>();
    v.periodStats = j.at("periodStats").get<std::vector<RosterPeriodAggregatedStatsDTO_t>>();
  }
  inline std::string to_string(const RosterAggregatedStatsDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
