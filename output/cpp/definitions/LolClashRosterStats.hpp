#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRosterPlayerAggregatedStats.hpp"
#include "LolClashRosterPeriodAggregatedStats.hpp"
namespace leagueapi {
  struct LolClashRosterStats_t {
    int32_t tournamentThemeId;
    std::string tournamentNameLocKey;
    int32_t tier;
    std::vector<LolClashRosterPeriodAggregatedStats_t> periodStats;
    std::string rosterName;
    int64_t rosterId;
    int32_t tournamentPeriods;
    std::string rosterShortName;
    std::map<std::string, LolClashRosterPlayerAggregatedStats_t> playerStats;
    int32_t rosterIconColorId;
    int32_t rosterIconId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterStats_t& v) {
    j["tournamentThemeId"] = v.tournamentThemeId;
    j["tournamentNameLocKey"] = v.tournamentNameLocKey;
    j["tier"] = v.tier;
    j["periodStats"] = v.periodStats;
    j["rosterName"] = v.rosterName;
    j["rosterId"] = v.rosterId;
    j["tournamentPeriods"] = v.tournamentPeriods;
    j["rosterShortName"] = v.rosterShortName;
    j["playerStats"] = v.playerStats;
    j["rosterIconColorId"] = v.rosterIconColorId;
    j["rosterIconId"] = v.rosterIconId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterStats_t& v) {
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>();
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>();
    v.tier = j.at("tier").get<int32_t>();
    v.periodStats = j.at("periodStats").get<std::vector<LolClashRosterPeriodAggregatedStats_t>>();
    v.rosterName = j.at("rosterName").get<std::string>();
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>();
    v.rosterShortName = j.at("rosterShortName").get<std::string>();
    v.playerStats = j.at("playerStats").get<std::map<std::string, LolClashRosterPlayerAggregatedStats_t>>();
    v.rosterIconColorId = j.at("rosterIconColorId").get<int32_t>();
    v.rosterIconId = j.at("rosterIconId").get<int32_t>();
  }
}
