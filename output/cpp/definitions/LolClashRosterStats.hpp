#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRosterPeriodAggregatedStats.hpp"
#include "LolClashRosterPlayerAggregatedStats.hpp"
namespace leagueapi {
  struct LolClashRosterStats_t {
    std::string rosterShortName;
    std::string rosterName;
    int32_t tier;
    int32_t rosterIconColorId;
    int32_t rosterIconId;
    int64_t rosterId;
    std::map<std::string, LolClashRosterPlayerAggregatedStats_t> playerStats;
    int32_t tournamentThemeId;
    int32_t tournamentPeriods;
    std::vector<LolClashRosterPeriodAggregatedStats_t> periodStats;
    std::string tournamentNameLocKey;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterStats_t& v) {
    j["rosterShortName"] = v.rosterShortName;
    j["rosterName"] = v.rosterName;
    j["tier"] = v.tier;
    j["rosterIconColorId"] = v.rosterIconColorId;
    j["rosterIconId"] = v.rosterIconId;
    j["rosterId"] = v.rosterId;
    j["playerStats"] = v.playerStats;
    j["tournamentThemeId"] = v.tournamentThemeId;
    j["tournamentPeriods"] = v.tournamentPeriods;
    j["periodStats"] = v.periodStats;
    j["tournamentNameLocKey"] = v.tournamentNameLocKey;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterStats_t& v) {
    v.rosterShortName = j.at("rosterShortName").get<std::string>();
    v.rosterName = j.at("rosterName").get<std::string>();
    v.tier = j.at("tier").get<int32_t>();
    v.rosterIconColorId = j.at("rosterIconColorId").get<int32_t>();
    v.rosterIconId = j.at("rosterIconId").get<int32_t>();
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.playerStats = j.at("playerStats").get<std::map<std::string, LolClashRosterPlayerAggregatedStats_t>>();
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>();
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>();
    v.periodStats = j.at("periodStats").get<std::vector<LolClashRosterPeriodAggregatedStats_t>>();
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>();
  }
  inline std::string to_string(const LolClashRosterStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
