#ifndef SWAGGER_TYPES_LeaguesLcdsSummonerLeagueItemsDTO_HPP
#define SWAGGER_TYPES_LeaguesLcdsSummonerLeagueItemsDTO_HPP
#include <json.hpp>
#include "LeaguesLcdsLeagueItemDTO.hpp"
namespace leagueapi {
  // 
  struct LeaguesLcdsSummonerLeagueItemsDTO {
    // 
    std::vector<LeaguesLcdsLeagueItemDTO> summonerLeagues;
  };

  void to_json(nlohmann::json& j, const LeaguesLcdsSummonerLeagueItemsDTO& v) {
    j["summonerLeagues"] = v.summonerLeagues;
  }

  void from_json(const nlohmann::json& j, LeaguesLcdsSummonerLeagueItemsDTO& v) {
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<LeaguesLcdsLeagueItemDTO>>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsSummonerLeagueItemsDTO_HPP
