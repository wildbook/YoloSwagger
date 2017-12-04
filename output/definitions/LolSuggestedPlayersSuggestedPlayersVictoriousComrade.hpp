#ifndef SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersVictoriousComrade_HPP
#define SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersVictoriousComrade_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSuggestedPlayersSuggestedPlayersVictoriousComrade {
    // 
    uint64_t summonerId;
    // 
    std::string summonerName;
  };

  void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersVictoriousComrade& v) {
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersVictoriousComrade& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersVictoriousComrade_HPP
