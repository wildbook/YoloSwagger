#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerDTO.hpp"
#include "ThemeVp.hpp"
#include "RosterStatsDTO.hpp"
#include "TournamentInfoDTO.hpp"
namespace leagueapi {
  struct TournamentPlayerInfoDTO_t {
    PlayerDTO_t player;
    std::vector<RosterStatsDTO_t> rosterStats;
    int32_t seasonVp;
    std::vector<ThemeVp_t> themeVps;
    int64_t time;
    std::vector<TournamentInfoDTO_t> tournamentInfo;
  };

  inline void to_json(nlohmann::json& j, const TournamentPlayerInfoDTO_t& v) {
    j["player"] = v.player;
    j["rosterStats"] = v.rosterStats;
    j["seasonVp"] = v.seasonVp;
    j["themeVps"] = v.themeVps;
    j["time"] = v.time;
    j["tournamentInfo"] = v.tournamentInfo;
  }

  inline void from_json(const nlohmann::json& j, TournamentPlayerInfoDTO_t& v) {
    v.player = j.at("player").get<PlayerDTO_t>();
    v.rosterStats = j.at("rosterStats").get<std::vector<RosterStatsDTO_t>>();
    v.seasonVp = j.at("seasonVp").get<int32_t>();
    v.themeVps = j.at("themeVps").get<std::vector<ThemeVp_t>>();
    v.time = j.at("time").get<int64_t>();
    v.tournamentInfo = j.at("tournamentInfo").get<std::vector<TournamentInfoDTO_t>>();
  }
}
