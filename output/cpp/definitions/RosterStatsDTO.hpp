#pragma once
#include <json.hpp>
#include <optional>
#include "RosterAggregatedStatsDTO.hpp"
namespace leagueapi {
  struct RosterStatsDTO_t {
    int64_t rosterId;
    std::string rosterName;
    std::string tournamentNameLocKey;
    int32_t rosterLogoColor;
    std::string rosterShortName;
    int32_t tier;
    RosterAggregatedStatsDTO_t stats;
    int32_t tournamentPeriods;
    int32_t rosterLogo;
    int32_t tournamentThemeId;
  };

  inline void to_json(nlohmann::json& j, const RosterStatsDTO_t& v) {
    j["rosterId"] = v.rosterId;
    j["rosterName"] = v.rosterName;
    j["tournamentNameLocKey"] = v.tournamentNameLocKey;
    j["rosterLogoColor"] = v.rosterLogoColor;
    j["rosterShortName"] = v.rosterShortName;
    j["tier"] = v.tier;
    j["stats"] = v.stats;
    j["tournamentPeriods"] = v.tournamentPeriods;
    j["rosterLogo"] = v.rosterLogo;
    j["tournamentThemeId"] = v.tournamentThemeId;
  }

  inline void from_json(const nlohmann::json& j, RosterStatsDTO_t& v) {
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.rosterName = j.at("rosterName").get<std::string>();
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>();
    v.rosterLogoColor = j.at("rosterLogoColor").get<int32_t>();
    v.rosterShortName = j.at("rosterShortName").get<std::string>();
    v.tier = j.at("tier").get<int32_t>();
    v.stats = j.at("stats").get<RosterAggregatedStatsDTO_t>();
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>();
    v.rosterLogo = j.at("rosterLogo").get<int32_t>();
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>();
  }
  inline std::string to_string(const RosterStatsDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
