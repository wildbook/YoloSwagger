#pragma once
#include <json.hpp>
#include <optional>
#include "RankedLeagueListDTO.hpp"
namespace leagueapi {
  struct RankedSummonerLeaguesDTO_t {
    std::vector<RankedLeagueListDTO_t> summonerLeagues;
  };

  inline void to_json(nlohmann::json& j, const RankedSummonerLeaguesDTO_t& v) {
    j["summonerLeagues"] = v.summonerLeagues;
  }

  inline void from_json(const nlohmann::json& j, RankedSummonerLeaguesDTO_t& v) {
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<RankedLeagueListDTO_t>>();
  }
}
