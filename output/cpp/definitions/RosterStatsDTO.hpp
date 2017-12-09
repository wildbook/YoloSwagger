#pragma once
#include <json.hpp>
#include <optional>
#include "RosterAggregatedStatsDTO.hpp"
namespace leagueapi {
  struct RosterStatsDTO_t {
    std::string rosterShortName;
    int64_t rosterId;
    RosterAggregatedStatsDTO_t stats;
    int32_t tournamentPeriods;
    std::string rosterName;
    int32_t rosterLogoColor;
    int32_t tournamentThemeId;
    int32_t tier;
    int32_t rosterLogo;
    std::string tournamentNameLocKey;
  };

  inline void to_json(nlohmann::json& j, const RosterStatsDTO_t& v) {
    j["rosterShortName"] = v.rosterShortName;
    j["rosterId"] = v.rosterId;
    j["stats"] = v.stats;
    j["tournamentPeriods"] = v.tournamentPeriods;
    j["rosterName"] = v.rosterName;
    j["rosterLogoColor"] = v.rosterLogoColor;
    j["tournamentThemeId"] = v.tournamentThemeId;
    j["tier"] = v.tier;
    j["rosterLogo"] = v.rosterLogo;
    j["tournamentNameLocKey"] = v.tournamentNameLocKey;
  }

  inline void from_json(const nlohmann::json& j, RosterStatsDTO_t& v) {
    v.rosterShortName = j.at("rosterShortName").get<std::string>();
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.stats = j.at("stats").get<RosterAggregatedStatsDTO_t>();
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t>();
    v.rosterName = j.at("rosterName").get<std::string>();
    v.rosterLogoColor = j.at("rosterLogoColor").get<int32_t>();
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t>();
    v.tier = j.at("tier").get<int32_t>();
    v.rosterLogo = j.at("rosterLogo").get<int32_t>();
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string>();
  }
  inline std::string to_string(const RosterStatsDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
