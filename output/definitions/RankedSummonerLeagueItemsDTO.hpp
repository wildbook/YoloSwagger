#ifndef SWAGGER_TYPES_RankedSummonerLeagueItemsDTO_HPP
#define SWAGGER_TYPES_RankedSummonerLeagueItemsDTO_HPP
#include <json.hpp>
#include "RankedLeagueItemDTO.hpp"
namespace test {
  // 
  struct RankedSummonerLeagueItemsDTO {
'    // 
    std::vector<RankedLeagueItemDTO> summonerLeagues;
  };

  void to_json(nlohmann::json& j, const RankedSummonerLeagueItemsDTO& v) {
    j["summonerLeagues"] = v.summonerLeagues;
  }

  void from_json(const nlohmann::json& j, RankedSummonerLeagueItemsDTO& v) {
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<RankedLeagueItemDTO>>;
  }

}
#endif // SWAGGER_TYPES_RankedSummonerLeagueItemsDTO_HPP
