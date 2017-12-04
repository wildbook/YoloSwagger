#ifndef SWAGGER_TYPES_RosterStatsDTO_HPP
#define SWAGGER_TYPES_RosterStatsDTO_HPP
#include <json.hpp>
#include "RosterAggregatedStatsDTO.hpp"
namespace leagueapi {
  // 
  struct RosterStatsDTO {
    // 
    std::string tournamentNameLocKey;
    // 
    RosterAggregatedStatsDTO stats;
    // 
    int32_t rosterLogo;
    // 
    int32_t rosterLogoColor;
    // 
    int64_t rosterId;
    // 
    int32_t tournamentPeriods;
    // 
    std::string rosterName;
    // 
    std::string rosterShortName;
    // 
    int32_t tier;
    // 
    int32_t tournamentThemeId;
  };

  inline void to_json(nlohmann::json& j, const RosterStatsDTO& v) {
    j["tournamentNameLocKey"] = v.tournamentNameLocKey;
    j["stats"] = v.stats;
    j["rosterLogo"] = v.rosterLogo;
    j["rosterLogoColor"] = v.rosterLogoColor;
    j["rosterId"] = v.rosterId;
    j["tournamentPeriods"] = v.tournamentPeriods;
    j["rosterName"] = v.rosterName;
    j["rosterShortName"] = v.rosterShortName;
    j["tier"] = v.tier;
    j["tournamentThemeId"] = v.tournamentThemeId;
  }

  inline void from_json(const nlohmann::json& j, RosterStatsDTO& v) {
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>;
    v.stats = j.at("stats").get<RosterAggregatedStatsDTO>;
    v.rosterLogo = j.at("rosterLogo").get<int32_t>;
    v.rosterLogoColor = j.at("rosterLogoColor").get<int32_t>;
    v.rosterId = j.at("rosterId").get<int64_t>;
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>;
    v.rosterName = j.at("rosterName").get<std::string>;
    v.rosterShortName = j.at("rosterShortName").get<std::string>;
    v.tier = j.at("tier").get<int32_t>;
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_RosterStatsDTO_HPP
