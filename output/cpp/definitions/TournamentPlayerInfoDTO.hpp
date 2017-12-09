#pragma once
#include <json.hpp>
#include <optional>
#include "ThemeVp.hpp"
#include "RosterStatsDTO.hpp"
#include "TournamentInfoDTO.hpp"
#include "PlayerDTO.hpp"
namespace leagueapi {
  struct TournamentPlayerInfoDTO_t {
    std::vector<ThemeVp_t> themeVps;
    std::vector<TournamentInfoDTO_t> tournamentInfo;
    PlayerDTO_t player;
    int64_t time;
    int32_t seasonVp;
    std::vector<RosterStatsDTO_t> rosterStats;
  };

  inline void to_json(nlohmann::json& j, const TournamentPlayerInfoDTO_t& v) {
    j["themeVps"] = v.themeVps;
    j["tournamentInfo"] = v.tournamentInfo;
    j["player"] = v.player;
    j["time"] = v.time;
    j["seasonVp"] = v.seasonVp;
    j["rosterStats"] = v.rosterStats;
  }

  inline void from_json(const nlohmann::json& j, TournamentPlayerInfoDTO_t& v) {
    v.themeVps = j.at("themeVps").get<std::vector<ThemeVp_t>>();
    v.tournamentInfo = j.at("tournamentInfo").get<std::vector<TournamentInfoDTO_t>>();
    v.player = j.at("player").get<PlayerDTO_t>();
    v.time = j.at("time").get<int64_t>();
    v.seasonVp = j.at("seasonVp").get<int32_t>();
    v.rosterStats = j.at("rosterStats").get<std::vector<RosterStatsDTO_t>>();
  }
  inline std::string to_string(const TournamentPlayerInfoDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
