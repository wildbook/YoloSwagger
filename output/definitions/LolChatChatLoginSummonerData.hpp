#ifndef SWAGGER_TYPES_LolChatChatLoginSummonerData_HPP
#define SWAGGER_TYPES_LolChatChatLoginSummonerData_HPP
#include <json.hpp>
#include "LolChatChatLoginSummonerLevelAndPoints.hpp"
namespace leagueapi {
  // 
  struct LolChatChatLoginSummonerData {
    // 
    LolChatChatLoginSummonerLevelAndPoints summonerLevelAndPoints;
  };

  void to_json(nlohmann::json& j, const LolChatChatLoginSummonerData& v) {
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
  }

  void from_json(const nlohmann::json& j, LolChatChatLoginSummonerData& v) {
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<LolChatChatLoginSummonerLevelAndPoints>;
  }

}
#endif // SWAGGER_TYPES_LolChatChatLoginSummonerData_HPP
