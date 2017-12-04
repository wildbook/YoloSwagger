#ifndef SWAGGER_TYPES_TournamentInfoDTO_HPP
#define SWAGGER_TYPES_TournamentInfoDTO_HPP
#include <json.hpp>
#include "TournamentDTO.hpp"
#include "RosterDTO.hpp"
#include "PendingRosterDTO.hpp"
namespace leagueapi {
  // 
  struct TournamentInfoDTO {
    // 
    std::vector<PendingRosterDTO> inviteePendingRosters;
    // 
    TournamentDTO tournament;
    // 
    PendingRosterDTO pendingRoster;
    // 
    int32_t themeVp;
    // 
    RosterDTO roster;
  };

  inline void to_json(nlohmann::json& j, const TournamentInfoDTO& v) {
    j["inviteePendingRosters"] = v.inviteePendingRosters;
    j["tournament"] = v.tournament;
    j["pendingRoster"] = v.pendingRoster;
    j["themeVp"] = v.themeVp;
    j["roster"] = v.roster;
  }

  inline void from_json(const nlohmann::json& j, TournamentInfoDTO& v) {
    v.inviteePendingRosters = j.at("inviteePendingRosters").get<std::vector<PendingRosterDTO>>;
    v.tournament = j.at("tournament").get<TournamentDTO>;
    v.pendingRoster = j.at("pendingRoster").get<PendingRosterDTO>;
    v.themeVp = j.at("themeVp").get<int32_t>;
    v.roster = j.at("roster").get<RosterDTO>;
  }

}
#endif // SWAGGER_TYPES_TournamentInfoDTO_HPP
