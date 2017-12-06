#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerDTO.hpp"
#include "ThemeVp.hpp"
#include "RosterStatsDTO.hpp"
#include "TournamentInfoDTO.hpp"
namespace leagueapi {
  struct TournamentPlayerInfoDTO_t {
    std::vector<TournamentInfoDTO_t> tournamentInfo;
    std::vector<RosterStatsDTO_t> rosterStats;
    std::vector<ThemeVp_t> themeVps;
    int64_t time;
    PlayerDTO_t player;
    int32_t seasonVp;
  };

  inline void to_json(nlohmann::json& j, const TournamentPlayerInfoDTO_t& v) {
    j["tournamentInfo"] = v.tournamentInfo;
    j["rosterStats"] = v.rosterStats;
    j["themeVps"] = v.themeVps;
    j["time"] = v.time;
    j["player"] = v.player;
    j["seasonVp"] = v.seasonVp;
  }

  inline void from_json(const nlohmann::json& j, TournamentPlayerInfoDTO_t& v) {
    v.tournamentInfo = j.at("tournamentInfo").get<std::vector<TournamentInfoDTO_t>>();
    v.rosterStats = j.at("rosterStats").get<std::vector<RosterStatsDTO_t>>();
    v.themeVps = j.at("themeVps").get<std::vector<ThemeVp_t>>();
    v.time = j.at("time").get<int64_t>();
    v.player = j.at("player").get<PlayerDTO_t>();
    v.seasonVp = j.at("seasonVp").get<int32_t>();
  }
}
