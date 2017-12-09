#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRosterPlayerAggregatedStats.hpp"
#include "LolClashRosterPeriodAggregatedStats.hpp"
namespace leagueapi {
  struct LolClashRosterStats_t {
    int32_t rosterIconColorId;
    int32_t rosterIconId;
    int32_t tournamentPeriods;
    int64_t rosterId;
    int32_t tournamentThemeId;
    std::vector<LolClashRosterPeriodAggregatedStats_t> periodStats;
    std::map<std::string, LolClashRosterPlayerAggregatedStats_t> playerStats;
    std::string tournamentNameLocKey;
    std::string rosterShortName;
    std::string rosterName;
    int32_t tier;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterStats_t& v) {
    j["rosterIconColorId"] = v.rosterIconColorId;
    j["rosterIconId"] = v.rosterIconId;
    j["tournamentPeriods"] = v.tournamentPeriods;
    j["rosterId"] = v.rosterId;
    j["tournamentThemeId"] = v.tournamentThemeId;
    j["periodStats"] = v.periodStats;
    j["playerStats"] = v.playerStats;
    j["tournamentNameLocKey"] = v.tournamentNameLocKey;
    j["rosterShortName"] = v.rosterShortName;
    j["rosterName"] = v.rosterName;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterStats_t& v) {
    v.rosterIconColorId = j.at("rosterIconColorId").get<int32_t>();
    v.rosterIconId = j.at("rosterIconId").get<int32_t>();
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>();
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>();
    v.periodStats = j.at("periodStats").get<std::vector<LolClashRosterPeriodAggregatedStats_t>>();
    v.playerStats = j.at("playerStats").get<std::map<std::string, LolClashRosterPlayerAggregatedStats_t>>();
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>();
    v.rosterShortName = j.at("rosterShortName").get<std::string>();
    v.rosterName = j.at("rosterName").get<std::string>();
    v.tier = j.at("tier").get<int32_t>();
  }
  inline std::string to_string(const LolClashRosterStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
