#pragma once
#include <json.hpp>
#include <optional>
#include "RosterAggregatedStatsDTO.hpp"
namespace leagueapi {
  struct RosterStatsDTO_t {
    int32_t rosterLogoColor;
    std::string tournamentNameLocKey;
    int32_t tier;
    std::string rosterName;
    int64_t rosterId;
    RosterAggregatedStatsDTO_t stats;
    int32_t rosterLogo;
    int32_t tournamentThemeId;
    int32_t tournamentPeriods;
    std::string rosterShortName;
  };

  inline void to_json(nlohmann::json& j, const RosterStatsDTO_t& v) {
    j["rosterLogoColor"] = v.rosterLogoColor;
    j["tournamentNameLocKey"] = v.tournamentNameLocKey;
    j["tier"] = v.tier;
    j["rosterName"] = v.rosterName;
    j["rosterId"] = v.rosterId;
    j["stats"] = v.stats;
    j["rosterLogo"] = v.rosterLogo;
    j["tournamentThemeId"] = v.tournamentThemeId;
    j["tournamentPeriods"] = v.tournamentPeriods;
    j["rosterShortName"] = v.rosterShortName;
  }

  inline void from_json(const nlohmann::json& j, RosterStatsDTO_t& v) {
    v.rosterLogoColor = j.at("rosterLogoColor").get<int32_t>();
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>();
    v.tier = j.at("tier").get<int32_t>();
    v.rosterName = j.at("rosterName").get<std::string>();
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.stats = j.at("stats").get<RosterAggregatedStatsDTO_t>();
    v.rosterLogo = j.at("rosterLogo").get<int32_t>();
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>();
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>();
    v.rosterShortName = j.at("rosterShortName").get<std::string>();
  }
}
