#ifndef SWAGGER_TYPES_LolClashRosterStats_HPP
#define SWAGGER_TYPES_LolClashRosterStats_HPP
#include <json.hpp>
#include "LolClashRosterPlayerAggregatedStats.hpp"
#include "LolClashRosterPeriodAggregatedStats.hpp"
namespace leagueapi {
  // 
  struct LolClashRosterStats {
    // 
    int32_t rosterIconColorId;
    // 
    std::string tournamentNameLocKey;
    // 
    std::string rosterName;
    // 
    std::map<std::string, LolClashRosterPlayerAggregatedStats> playerStats;
    // 
    int32_t tournamentPeriods;
    // 
    int64_t rosterId;
    // 
    std::string rosterShortName;
    // 
    int32_t tier;
    // 
    int32_t rosterIconId;
    // 
    int32_t tournamentThemeId;
    // 
    std::vector<LolClashRosterPeriodAggregatedStats> periodStats;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterStats& v) {
    j["rosterIconColorId"] = v.rosterIconColorId;
    j["tournamentNameLocKey"] = v.tournamentNameLocKey;
    j["rosterName"] = v.rosterName;
    j["playerStats"] = v.playerStats;
    j["tournamentPeriods"] = v.tournamentPeriods;
    j["rosterId"] = v.rosterId;
    j["rosterShortName"] = v.rosterShortName;
    j["tier"] = v.tier;
    j["rosterIconId"] = v.rosterIconId;
    j["tournamentThemeId"] = v.tournamentThemeId;
    j["periodStats"] = v.periodStats;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterStats& v) {
    v.rosterIconColorId = j.at("rosterIconColorId").get<int32_t>;
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>;
    v.rosterName = j.at("rosterName").get<std::string>;
    v.playerStats = j.at("playerStats").get<std::map<std::string, LolClashRosterPlayerAggregatedStats>>;
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>;
    v.rosterId = j.at("rosterId").get<int64_t>;
    v.rosterShortName = j.at("rosterShortName").get<std::string>;
    v.tier = j.at("tier").get<int32_t>;
    v.rosterIconId = j.at("rosterIconId").get<int32_t>;
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>;
    v.periodStats = j.at("periodStats").get<std::vector<LolClashRosterPeriodAggregatedStats>>;
  }

}
#endif // SWAGGER_TYPES_LolClashRosterStats_HPP