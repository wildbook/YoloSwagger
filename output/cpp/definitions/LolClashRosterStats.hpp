#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRosterPeriodAggregatedStats.hpp"
#include "LolClashRosterPlayerAggregatedStats.hpp"
namespace leagueapi {
  struct LolClashRosterStats_t {
    int32_t rosterIconId;
    int64_t rosterId;
    std::string tournamentNameLocKey;
    std::string rosterName;
    std::map<std::string, LolClashRosterPlayerAggregatedStats_t> playerStats;
    std::string rosterShortName;
    int32_t rosterIconColorId;
    std::vector<LolClashRosterPeriodAggregatedStats_t> periodStats;
    int32_t tournamentPeriods;
    int32_t tier;
    int32_t tournamentThemeId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterStats_t& v) {
    j["rosterIconId"] = v.rosterIconId;
    j["rosterId"] = v.rosterId;
    j["tournamentNameLocKey"] = v.tournamentNameLocKey;
    j["rosterName"] = v.rosterName;
    j["playerStats"] = v.playerStats;
    j["rosterShortName"] = v.rosterShortName;
    j["rosterIconColorId"] = v.rosterIconColorId;
    j["periodStats"] = v.periodStats;
    j["tournamentPeriods"] = v.tournamentPeriods;
    j["tier"] = v.tier;
    j["tournamentThemeId"] = v.tournamentThemeId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterStats_t& v) {
    v.rosterIconId = j.at("rosterIconId").get<int32_t>();
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>();
    v.rosterName = j.at("rosterName").get<std::string>();
    v.playerStats = j.at("playerStats").get<std::map<std::string, LolClashRosterPlayerAggregatedStats_t>>();
    v.rosterShortName = j.at("rosterShortName").get<std::string>();
    v.rosterIconColorId = j.at("rosterIconColorId").get<int32_t>();
    v.periodStats = j.at("periodStats").get<std::vector<LolClashRosterPeriodAggregatedStats_t>>();
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>();
    v.tier = j.at("tier").get<int32_t>();
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>();
  }
  inline std::string to_string(const LolClashRosterStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
