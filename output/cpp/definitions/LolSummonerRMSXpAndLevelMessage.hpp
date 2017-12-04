#ifndef SWAGGER_TYPES_LolSummonerRMSXpAndLevelMessage_HPP
#define SWAGGER_TYPES_LolSummonerRMSXpAndLevelMessage_HPP
#include <json.hpp>
#include "LolSummonerRMSLevelField.hpp"
namespace leagueapi {
  // 
  struct LolSummonerRMSXpAndLevelMessage {
    // 
    nlohmann::json xp;
    // 
    LolSummonerRMSLevelField level;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerRMSXpAndLevelMessage& v) {
    j["xp"] = v.xp;
    j["level"] = v.level;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerRMSXpAndLevelMessage& v) {
    v.xp = j.at("xp").get<nlohmann::json>;
    v.level = j.at("level").get<LolSummonerRMSLevelField>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerRMSXpAndLevelMessage_HPP
