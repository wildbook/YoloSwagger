#pragma once
#include <json.hpp>
#include <optional>
#include "RosterAggregatedStatsDTO.hpp"
namespace leagueapi {
  struct RosterStatsDTO_t {
    std::string_t tournamentNameLocKey;
    RosterAggregatedStatsDTO_t stats;
    int32_t_t rosterLogo;
    int32_t_t rosterLogoColor;
    int64_t_t rosterId;
    int32_t_t tournamentPeriods;
    std::string_t rosterName;
    std::string_t rosterShortName;
    int32_t_t tier;
    int32_t_t tournamentThemeId;
  };

  inline void to_json(nlohmann::json& j, const RosterStatsDTO_t& v) {
    j["tournamentNameLocKey"] = v.tournamentNameLocKey;
    j["stats"] = v.stats;
    j["rosterLogo"] = v.rosterLogo;
    j["rosterLogoColor"] = v.rosterLogoColor;
    j["rosterId"] = v.rosterId;
    j["tournamentPeriods"] = v.tournamentPeriods;
    j["rosterName"] = v.rosterName;
    j["rosterShortName"] = v.rosterShortName;
    j["tier"] = v.tier;
    j["tournamentThemeId"] = v.tournamentThemeId;
  }

  inline void from_json(const nlohmann::json& j, RosterStatsDTO_t& v) {
    v.tournamentNameLocKey = j.at("tournamentNameLocKey").get<std::string_t>();
    v.stats = j.at("stats").get<RosterAggregatedStatsDTO_t>();
    v.rosterLogo = j.at("rosterLogo").get<int32_t_t>();
    v.rosterLogoColor = j.at("rosterLogoColor").get<int32_t_t>();
    v.rosterId = j.at("rosterId").get<int64_t_t>();
    v.tournamentPeriods = j.at("tournamentPeriods").get<int32_t_t>();
    v.rosterName = j.at("rosterName").get<std::string_t>();
    v.rosterShortName = j.at("rosterShortName").get<std::string_t>();
    v.tier = j.at("tier").get<int32_t_t>();
    v.tournamentThemeId = j.at("tournamentThemeId").get<int32_t_t>();
  }
  inline std::string to_string(const RosterStatsDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
