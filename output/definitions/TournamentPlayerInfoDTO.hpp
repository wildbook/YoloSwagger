#ifndef SWAGGER_TYPES_TournamentPlayerInfoDTO_HPP
#define SWAGGER_TYPES_TournamentPlayerInfoDTO_HPP
#include <json.hpp>
#include "RosterStatsDTO.hpp"
#include "ThemeVp.hpp"
#include "PlayerDTO.hpp"
#include "TournamentInfoDTO.hpp"
namespace leagueapi {
  // 
  struct TournamentPlayerInfoDTO {
    // 
    PlayerDTO player;
    // 
    std::vector<RosterStatsDTO> rosterStats;
    // 
    int32_t seasonVp;
    // 
    std::vector<ThemeVp> themeVps;
    // 
    int64_t time;
    // 
    std::vector<TournamentInfoDTO> tournamentInfo;
  };

  inline void to_json(nlohmann::json& j, const TournamentPlayerInfoDTO& v) {
    j["player"] = v.player;
    j["rosterStats"] = v.rosterStats;
    j["seasonVp"] = v.seasonVp;
    j["themeVps"] = v.themeVps;
    j["time"] = v.time;
    j["tournamentInfo"] = v.tournamentInfo;
  }

  inline void from_json(const nlohmann::json& j, TournamentPlayerInfoDTO& v) {
    v.player = j.at("player").get<PlayerDTO>;
    v.rosterStats = j.at("rosterStats").get<std::vector<RosterStatsDTO>>;
    v.seasonVp = j.at("seasonVp").get<int32_t>;
    v.themeVps = j.at("themeVps").get<std::vector<ThemeVp>>;
    v.time = j.at("time").get<int64_t>;
    v.tournamentInfo = j.at("tournamentInfo").get<std::vector<TournamentInfoDTO>>;
  }

}
#endif // SWAGGER_TYPES_TournamentPlayerInfoDTO_HPP
