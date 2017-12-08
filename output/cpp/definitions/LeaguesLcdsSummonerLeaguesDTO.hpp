#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsSummonerLeagueListDTO.hpp"
namespace leagueapi {
  struct LeaguesLcdsSummonerLeaguesDTO_t {
    std::vector<LeaguesLcdsSummonerLeagueListDTO_t> summonerLeagues;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsSummonerLeaguesDTO_t& v) {
    j["summonerLeagues"] = v.summonerLeagues;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsSummonerLeaguesDTO_t& v) {
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<LeaguesLcdsSummonerLeagueListDTO_t>>();
  }
  inline std::string to_string(const LeaguesLcdsSummonerLeaguesDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
