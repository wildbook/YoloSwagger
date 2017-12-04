#ifndef SWAGGER_TYPES_TournamentInfoDTO_HPP
#define SWAGGER_TYPES_TournamentInfoDTO_HPP
#include <json.hpp>
#include "TournamentDTO.hpp"
#include "PendingRosterDTO.hpp"
#include "RosterDTO.hpp"
namespace leagueapi {
  // 
  struct TournamentInfoDTO {
    // 
    std::vector<PendingRosterDTO> inviteePendingRosters;
    // 
    PendingRosterDTO pendingRoster;
    // 
    RosterDTO roster;
    // 
    int32_t themeVp;
    // 
    TournamentDTO tournament;
  };

  inline void to_json(nlohmann::json& j, const TournamentInfoDTO& v) {
    j["inviteePendingRosters"] = v.inviteePendingRosters;
    j["pendingRoster"] = v.pendingRoster;
    j["roster"] = v.roster;
    j["themeVp"] = v.themeVp;
    j["tournament"] = v.tournament;
  }

  inline void from_json(const nlohmann::json& j, TournamentInfoDTO& v) {
    v.inviteePendingRosters = j.at("inviteePendingRosters").get<std::vector<PendingRosterDTO>>;
    v.pendingRoster = j.at("pendingRoster").get<PendingRosterDTO>;
    v.roster = j.at("roster").get<RosterDTO>;
    v.themeVp = j.at("themeVp").get<int32_t>;
    v.tournament = j.at("tournament").get<TournamentDTO>;
  }

}
#endif // SWAGGER_TYPES_TournamentInfoDTO_HPP
