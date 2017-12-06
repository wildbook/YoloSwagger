#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRosterPlayerAggregatedStats.hpp"
#include "LolClashRosterPeriodAggregatedStats.hpp"
namespace leagueapi {
  struct LolClashRosterStats_t {
    std::vector<LolClashRosterPeriodAggregatedStats_t> periodStats;
    std::map<std::string, LolClashRosterPlayerAggregatedStats_t> playerStats;
    int32_t rosterIconColorId;
    int32_t rosterIconId;
    int64_t rosterId;
    std::string rosterName;
    std::string rosterShortName;
    int32_t tier;
    std::string tournamentNameLocKey;
    int32_t tournamentPeriods;
    int32_t tournamentThemeId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterStats_t& v) {
    j["periodStats"] = v.periodStats;
    j["playerStats"] = v.playerStats;
    j["rosterIconColorId"] = v.rosterIconColorId;
    j["rosterIconId"] = v.rosterIconId;
    j["rosterId"] = v.rosterId;
    j["rosterName"] = v.rosterName;
    j["rosterShortName"] = v.rosterShortName;
    j["tier"] = v.tier;
    j["tournamentNameLocKey"] = v.tournamentNameLocKey;
    j["tournamentPeriods"] = v.tournamentPeriods;
    j["tournamentThemeId"] = v.tournamentThemeId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterStats_t& v) {
    v.periodStats = j.at("periodStats").get<std::vector<LolClashRosterPeriodAggregatedStats_t>>();
    v.playerStats = j.at("playerStats").get<std::map<std::string, LolClashRosterPlayerAggregatedStats_t>>();
    v.rosterIconColorId = j.at("rosterIconColorId").get<int32_t>();
    v.rosterIconId = j.at("rosterIconId").get<int32_t>();
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.rosterName = j.at("rosterName").get<std::string>();
    v.rosterShortName = j.at("rosterShortName").get<std::string>();
    v.tier = j.at("tier").get<int32_t>();
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>();
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>();
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>();
  }
}
