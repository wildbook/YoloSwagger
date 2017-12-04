#ifndef SWAGGER_TYPES_LeaguesLcdsSummonerLeaguesDTO_HPP
#define SWAGGER_TYPES_LeaguesLcdsSummonerLeaguesDTO_HPP
#include <json.hpp>
#include "LeaguesLcdsSummonerLeagueListDTO.hpp"
namespace test {
  // 
  struct LeaguesLcdsSummonerLeaguesDTO {
'    // 
    std::vector<LeaguesLcdsSummonerLeagueListDTO> summonerLeagues;
  };

  void to_json(nlohmann::json& j, const LeaguesLcdsSummonerLeaguesDTO& v) {
    j["summonerLeagues"] = v.summonerLeagues;
  }

  void from_json(const nlohmann::json& j, LeaguesLcdsSummonerLeaguesDTO& v) {
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<LeaguesLcdsSummonerLeagueListDTO>>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsSummonerLeaguesDTO_HPP
