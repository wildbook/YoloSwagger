#pragma once
#include <json.hpp>
#include <optional>
#include "TournamentInfoDTO.hpp"
namespace leagueapi {
  struct TournamentInfoMinimalDTO_t {
    int64_t time;
    std::vector<TournamentInfoDTO_t> tournamentInfo;
  };

  inline void to_json(nlohmann::json& j, const TournamentInfoMinimalDTO_t& v) {
    j["time"] = v.time;
    j["tournamentInfo"] = v.tournamentInfo;
  }

  inline void from_json(const nlohmann::json& j, TournamentInfoMinimalDTO_t& v) {
    v.time = j.at("time").get<int64_t>();
    v.tournamentInfo = j.at("tournamentInfo").get<std::vector<TournamentInfoDTO_t>>();
  }
}
