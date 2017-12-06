#pragma once
#include <json.hpp>
#include <optional>
#include "RankedLeagueItemDTO.hpp"
namespace leagueapi {
  struct RankedSummonerLeagueItemsDTO_t {
    std::vector<RankedLeagueItemDTO_t> summonerLeagues;
  };

  inline void to_json(nlohmann::json& j, const RankedSummonerLeagueItemsDTO_t& v) {
    j["summonerLeagues"] = v.summonerLeagues;
  }

  inline void from_json(const nlohmann::json& j, RankedSummonerLeagueItemsDTO_t& v) {
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<RankedLeagueItemDTO_t>>();
  }
}
