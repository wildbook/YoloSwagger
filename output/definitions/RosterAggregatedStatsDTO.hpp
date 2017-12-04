#ifndef SWAGGER_TYPES_RosterAggregatedStatsDTO_HPP
#define SWAGGER_TYPES_RosterAggregatedStatsDTO_HPP
#include <json.hpp>
#include "RosterPlayerAggregatedStatsDTO.hpp"
#include "RosterPeriodAggregatedStatsDTO.hpp"
namespace leagueapi {
  // 
  struct RosterAggregatedStatsDTO {
    // 
    std::vector<RosterPeriodAggregatedStatsDTO> periodStats;
    // 
    std::map<std::string, RosterPlayerAggregatedStatsDTO> playerStats;
  };

  inline void to_json(nlohmann::json& j, const RosterAggregatedStatsDTO& v) {
    j["periodStats"] = v.periodStats;
    j["playerStats"] = v.playerStats;
  }

  inline void from_json(const nlohmann::json& j, RosterAggregatedStatsDTO& v) {
    v.periodStats = j.at("periodStats").get<std::vector<RosterPeriodAggregatedStatsDTO>>;
    v.playerStats = j.at("playerStats").get<std::map<std::string, RosterPlayerAggregatedStatsDTO>>;
  }

}
#endif // SWAGGER_TYPES_RosterAggregatedStatsDTO_HPP
