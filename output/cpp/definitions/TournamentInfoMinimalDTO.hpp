#pragma once
#include <json.hpp>
#include <optional>
#include "TournamentInfoDTO.hpp"
namespace leagueapi {
  struct TournamentInfoMinimalDTO_t {
    std::vector<TournamentInfoDTO_t> tournamentInfo;
    int64_t time;
  };

  inline void to_json(nlohmann::json& j, const TournamentInfoMinimalDTO_t& v) {
    j["tournamentInfo"] = v.tournamentInfo;
    j["time"] = v.time;
  }

  inline void from_json(const nlohmann::json& j, TournamentInfoMinimalDTO_t& v) {
    v.tournamentInfo = j.at("tournamentInfo").get<std::vector<TournamentInfoDTO_t>>();
    v.time = j.at("time").get<int64_t>();
  }
  inline std::string to_string(const TournamentInfoMinimalDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
