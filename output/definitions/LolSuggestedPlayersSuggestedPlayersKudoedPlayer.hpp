#ifndef SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersKudoedPlayer_HPP
#define SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersKudoedPlayer_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolSuggestedPlayersSuggestedPlayersKudoedPlayer {
'    // 
    uint64_t kudoedSummonerId;
    // 
    std::string kudoedSummonerName;
  };

  void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersKudoedPlayer& v) {
    j["kudoedSummonerId"] = v.kudoedSummonerId;
    j["kudoedSummonerName"] = v.kudoedSummonerName;
  }

  void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersKudoedPlayer& v) {
    v.kudoedSummonerId = j.at("kudoedSummonerId").get<uint64_t>;
    v.kudoedSummonerName = j.at("kudoedSummonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolSuggestedPlayersSuggestedPlayersKudoedPlayer_HPP
