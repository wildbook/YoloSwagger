#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsLeagueItemDTO.hpp"
namespace leagueapi {
  struct LeaguesLcdsSummonerLeagueItemsDTO_t {
    std::vector<LeaguesLcdsLeagueItemDTO_t> summonerLeagues;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsSummonerLeagueItemsDTO_t& v) {
    j["summonerLeagues"] = v.summonerLeagues;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsSummonerLeagueItemsDTO_t& v) {
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<LeaguesLcdsLeagueItemDTO_t>>();
  }
  inline std::string to_string(const LeaguesLcdsSummonerLeagueItemsDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
