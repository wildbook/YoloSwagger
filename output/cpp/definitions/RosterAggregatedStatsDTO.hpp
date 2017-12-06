#pragma once
#include <json.hpp>
#include <optional>
#include "RosterPeriodAggregatedStatsDTO.hpp"
#include "RosterPlayerAggregatedStatsDTO.hpp"
namespace leagueapi {
  struct RosterAggregatedStatsDTO_t {
    std::vector<RosterPeriodAggregatedStatsDTO_t> periodStats;
    std::map<std::string, RosterPlayerAggregatedStatsDTO_t> playerStats;
  };

  inline void to_json(nlohmann::json& j, const RosterAggregatedStatsDTO_t& v) {
    j["periodStats"] = v.periodStats;
    j["playerStats"] = v.playerStats;
  }

  inline void from_json(const nlohmann::json& j, RosterAggregatedStatsDTO_t& v) {
    v.periodStats = j.at("periodStats").get<std::vector<RosterPeriodAggregatedStatsDTO_t>>();
    v.playerStats = j.at("playerStats").get<std::map<std::string, RosterPlayerAggregatedStatsDTO_t>>();
  }
}
