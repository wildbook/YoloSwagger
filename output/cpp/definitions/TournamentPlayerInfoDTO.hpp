#pragma once
#include <json.hpp>
#include <optional>
#include "TournamentInfoDTO.hpp"
#include "ThemeVp.hpp"
#include "RosterStatsDTO.hpp"
#include "PlayerDTO.hpp"
namespace leagueapi {
  struct TournamentPlayerInfoDTO_t {
    int64_t time;
    std::vector<RosterStatsDTO_t> rosterStats;
    std::vector<TournamentInfoDTO_t> tournamentInfo;
    int32_t seasonVp;
    std::vector<ThemeVp_t> themeVps;
    PlayerDTO_t player;
  };

  inline void to_json(nlohmann::json& j, const TournamentPlayerInfoDTO_t& v) {
    j["time"] = v.time;
    j["rosterStats"] = v.rosterStats;
    j["tournamentInfo"] = v.tournamentInfo;
    j["seasonVp"] = v.seasonVp;
    j["themeVps"] = v.themeVps;
    j["player"] = v.player;
  }

  inline void from_json(const nlohmann::json& j, TournamentPlayerInfoDTO_t& v) {
    v.time = j.at("time").get<int64_t>();
    v.rosterStats = j.at("rosterStats").get<std::vector<RosterStatsDTO_t>>();
    v.tournamentInfo = j.at("tournamentInfo").get<std::vector<TournamentInfoDTO_t>>();
    v.seasonVp = j.at("seasonVp").get<int32_t>();
    v.themeVps = j.at("themeVps").get<std::vector<ThemeVp_t>>();
    v.player = j.at("player").get<PlayerDTO_t>();
  }
  inline std::string to_string(const TournamentPlayerInfoDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
