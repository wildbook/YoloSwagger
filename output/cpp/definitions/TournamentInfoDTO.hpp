#pragma once
#include <json.hpp>
#include <optional>
#include "PendingRosterDTO.hpp"
#include "RosterDTO.hpp"
#include "TournamentDTO.hpp"
namespace leagueapi {
  struct TournamentInfoDTO_t {
    std::optional<PendingRosterDTO_t> pendingRoster;
    int32_t themeVp;
    std::optional<RosterDTO_t> roster;
    TournamentDTO_t tournament;
    std::vector<PendingRosterDTO_t> inviteePendingRosters;
  };

  inline void to_json(nlohmann::json& j, const TournamentInfoDTO_t& v) {
    if(v.pendingRoster)
      j["pendingRoster"] = *v.pendingRoster;
    j["themeVp"] = v.themeVp;
    if(v.roster)
      j["roster"] = *v.roster;
    j["tournament"] = v.tournament;
    j["inviteePendingRosters"] = v.inviteePendingRosters;
  }

  inline void from_json(const nlohmann::json& j, TournamentInfoDTO_t& v) {
    if(auto it = j.find("pendingRoster"); it != j.end() && !it->is_null())
      v.pendingRoster = it->get<PendingRosterDTO_t>();
    v.themeVp = j.at("themeVp").get<int32_t>();
    if(auto it = j.find("roster"); it != j.end() && !it->is_null())
      v.roster = it->get<RosterDTO_t>();
    v.tournament = j.at("tournament").get<TournamentDTO_t>();
    v.inviteePendingRosters = j.at("inviteePendingRosters").get<std::vector<PendingRosterDTO_t>>();
  }
  inline std::string to_string(const TournamentInfoDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
