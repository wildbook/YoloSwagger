#ifndef SWAGGER_TYPES_RankedSummonerLeaguesDTO_HPP
#define SWAGGER_TYPES_RankedSummonerLeaguesDTO_HPP
#include <json.hpp>
#include "RankedLeagueListDTO.hpp"
namespace leagueapi {
  // 
  struct RankedSummonerLeaguesDTO {
    // 
    std::vector<RankedLeagueListDTO> summonerLeagues;
  };

  void to_json(nlohmann::json& j, const RankedSummonerLeaguesDTO& v) {
    j["summonerLeagues"] = v.summonerLeagues;
  }

  void from_json(const nlohmann::json& j, RankedSummonerLeaguesDTO& v) {
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<RankedLeagueListDTO>>;
  }

}
#endif // SWAGGER_TYPES_RankedSummonerLeaguesDTO_HPP
