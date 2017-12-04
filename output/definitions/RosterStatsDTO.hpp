#ifndef SWAGGER_TYPES_RosterStatsDTO_HPP
#define SWAGGER_TYPES_RosterStatsDTO_HPP
#include <json.hpp>
#include "RosterAggregatedStatsDTO.hpp"
namespace leagueapi {
  // 
  struct RosterStatsDTO {
    // 
    int64_t rosterId;
    // 
    int32_t rosterLogo;
    // 
    int32_t rosterLogoColor;
    // 
    std::string rosterName;
    // 
    std::string rosterShortName;
    // 
    RosterAggregatedStatsDTO stats;
    // 
    int32_t tier;
    // 
    std::string tournamentNameLocKey;
    // 
    int32_t tournamentPeriods;
    // 
    int32_t tournamentThemeId;
  };

  void to_json(nlohmann::json& j, const RosterStatsDTO& v) {
    j["rosterId"] = v.rosterId;
    j["rosterLogo"] = v.rosterLogo;
    j["rosterLogoColor"] = v.rosterLogoColor;
    j["rosterName"] = v.rosterName;
    j["rosterShortName"] = v.rosterShortName;
    j["stats"] = v.stats;
    j["tier"] = v.tier;
    j["tournamentNameLocKey"] = v.tournamentNameLocKey;
    j["tournamentPeriods"] = v.tournamentPeriods;
    j["tournamentThemeId"] = v.tournamentThemeId;
  }

  void from_json(const nlohmann::json& j, RosterStatsDTO& v) {
    v.rosterId = j.at("rosterId").get<int64_t>;
    v.rosterLogo = j.at("rosterLogo").get<int32_t>;
    v.rosterLogoColor = j.at("rosterLogoColor").get<int32_t>;
    v.rosterName = j.at("rosterName").get<std::string>;
    v.rosterShortName = j.at("rosterShortName").get<std::string>;
    v.stats = j.at("stats").get<RosterAggregatedStatsDTO>;
    v.tier = j.at("tier").get<int32_t>;
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>;
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>;
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_RosterStatsDTO_HPP
