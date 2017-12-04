#ifndef SWAGGER_TYPES_TournamentPlayerInfoDTO_HPP
#define SWAGGER_TYPES_TournamentPlayerInfoDTO_HPP
#include <json.hpp>
#include "PlayerDTO.hpp"
#include "TournamentInfoDTO.hpp"
#include "ThemeVp.hpp"
#include "RosterStatsDTO.hpp"
namespace leagueapi {
  // 
  struct TournamentPlayerInfoDTO {
    // 
    std::vector<ThemeVp> themeVps;
    // 
    std::vector<RosterStatsDTO> rosterStats;
    // 
    std::vector<TournamentInfoDTO> tournamentInfo;
    // 
    int32_t seasonVp;
    // 
    PlayerDTO player;
    // 
    int64_t time;
  };

  inline void to_json(nlohmann::json& j, const TournamentPlayerInfoDTO& v) {
    j["themeVps"] = v.themeVps;
    j["rosterStats"] = v.rosterStats;
    j["tournamentInfo"] = v.tournamentInfo;
    j["seasonVp"] = v.seasonVp;
    j["player"] = v.player;
    j["time"] = v.time;
  }

  inline void from_json(const nlohmann::json& j, TournamentPlayerInfoDTO& v) {
    v.themeVps = j.at("themeVps").get<std::vector<ThemeVp>>;
    v.rosterStats = j.at("rosterStats").get<std::vector<RosterStatsDTO>>;
    v.tournamentInfo = j.at("tournamentInfo").get<std::vector<TournamentInfoDTO>>;
    v.seasonVp = j.at("seasonVp").get<int32_t>;
    v.player = j.at("player").get<PlayerDTO>;
    v.time = j.at("time").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_TournamentPlayerInfoDTO_HPP
