#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesSignedLeagueItemDTO.hpp"
namespace leagueapi {
  struct LolLeaguesSignedSummonerLeagueItemsDTO_t {
    std::vector<LolLeaguesSignedLeagueItemDTO_t> summonerLeagues;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesSignedSummonerLeagueItemsDTO_t& v) {
    j["summonerLeagues"] = v.summonerLeagues;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesSignedSummonerLeagueItemsDTO_t& v) {
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<LolLeaguesSignedLeagueItemDTO_t>>();
  }
}
