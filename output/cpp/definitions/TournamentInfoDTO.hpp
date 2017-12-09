#pragma once
#include <json.hpp>
#include <optional>
#include "TournamentDTO.hpp"
#include "RosterDTO.hpp"
#include "PendingRosterDTO.hpp"
namespace leagueapi {
  struct TournamentInfoDTO_t {
    std::vector<PendingRosterDTO_t> inviteePendingRosters;
    int32_t themeVp;
    std::optional<PendingRosterDTO_t> pendingRoster;
    TournamentDTO_t tournament;
    std::optional<RosterDTO_t> roster;
  };

  inline void to_json(nlohmann::json& j, const TournamentInfoDTO_t& v) {
    j["inviteePendingRosters"] = v.inviteePendingRosters;
    j["themeVp"] = v.themeVp;
    if(v.pendingRoster)
      j["pendingRoster"] = *v.pendingRoster;
    j["tournament"] = v.tournament;
    if(v.roster)
      j["roster"] = *v.roster;
  }

  inline void from_json(const nlohmann::json& j, TournamentInfoDTO_t& v) {
    v.inviteePendingRosters = j.at("inviteePendingRosters").get<std::vector<PendingRosterDTO_t>>();
    v.themeVp = j.at("themeVp").get<int32_t>();
    if(auto it = j.find("pendingRoster"); it != j.end() && !it->is_null())
      v.pendingRoster = it->get<PendingRosterDTO_t>();
    v.tournament = j.at("tournament").get<TournamentDTO_t>();
    if(auto it = j.find("roster"); it != j.end() && !it->is_null())
      v.roster = it->get<RosterDTO_t>();
  }
  inline std::string to_string(const TournamentInfoDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
