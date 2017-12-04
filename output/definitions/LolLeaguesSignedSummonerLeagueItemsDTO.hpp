#ifndef SWAGGER_TYPES_LolLeaguesSignedSummonerLeagueItemsDTO_HPP
#define SWAGGER_TYPES_LolLeaguesSignedSummonerLeagueItemsDTO_HPP
#include <json.hpp>
#include "LolLeaguesSignedLeagueItemDTO.hpp"
namespace leagueapi {
  // 
  struct LolLeaguesSignedSummonerLeagueItemsDTO {
    // 
    std::vector<LolLeaguesSignedLeagueItemDTO> summonerLeagues;
  };

  void to_json(nlohmann::json& j, const LolLeaguesSignedSummonerLeagueItemsDTO& v) {
    j["summonerLeagues"] = v.summonerLeagues;
  }

  void from_json(const nlohmann::json& j, LolLeaguesSignedSummonerLeagueItemsDTO& v) {
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<LolLeaguesSignedLeagueItemDTO>>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesSignedSummonerLeagueItemsDTO_HPP
