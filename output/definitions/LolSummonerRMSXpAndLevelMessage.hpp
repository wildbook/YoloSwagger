#ifndef SWAGGER_TYPES_LolSummonerRMSXpAndLevelMessage_HPP
#define SWAGGER_TYPES_LolSummonerRMSXpAndLevelMessage_HPP
#include <json.hpp>
#include "LolSummonerRMSLevelField.hpp"
namespace leagueapi {
  // 
  struct LolSummonerRMSXpAndLevelMessage {
    // 
    LolSummonerRMSLevelField level;
    // 
    nlohmann::json xp;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerRMSXpAndLevelMessage& v) {
    j["level"] = v.level;
    j["xp"] = v.xp;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerRMSXpAndLevelMessage& v) {
    v.level = j.at("level").get<LolSummonerRMSLevelField>;
    v.xp = j.at("xp").get<nlohmann::json>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerRMSXpAndLevelMessage_HPP
