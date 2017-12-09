#pragma once
#include <json.hpp>
#include <optional>
#include "PendingRosterDTO.hpp"
#include "TournamentDTO.hpp"
#include "RosterDTO.hpp"
namespace leagueapi {
  struct TournamentInfoDTO_t {
    int32_t themeVp;
    std::optional<RosterDTO_t> roster;
    std::vector<PendingRosterDTO_t> inviteePendingRosters;
    std::optional<PendingRosterDTO_t> pendingRoster;
    TournamentDTO_t tournament;
  };

  inline void to_json(nlohmann::json& j, const TournamentInfoDTO_t& v) {
    j["themeVp"] = v.themeVp;
    if(v.roster)
      j["roster"] = *v.roster;
    j["inviteePendingRosters"] = v.inviteePendingRosters;
    if(v.pendingRoster)
      j["pendingRoster"] = *v.pendingRoster;
    j["tournament"] = v.tournament;
  }

  inline void from_json(const nlohmann::json& j, TournamentInfoDTO_t& v) {
    v.themeVp = j.at("themeVp").get<int32_t>();
    if(auto it = j.find("roster"); it != j.end() && !it->is_null())
      v.roster = it->get<RosterDTO_t>();
    v.inviteePendingRosters = j.at("inviteePendingRosters").get<std::vector<PendingRosterDTO_t>>();
    if(auto it = j.find("pendingRoster"); it != j.end() && !it->is_null())
      v.pendingRoster = it->get<PendingRosterDTO_t>();
    v.tournament = j.at("tournament").get<TournamentDTO_t>();
  }
  inline std::string to_string(const TournamentInfoDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
