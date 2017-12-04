#ifndef SWAGGER_TYPES_LolEndOfGameLoginDataPacket_HPP
#define SWAGGER_TYPES_LolEndOfGameLoginDataPacket_HPP
#include <json.hpp>
#include "LolEndOfGameLoginSummonerData.hpp"
#include "LolEndOfGameSimpleMessage.hpp"
namespace leagueapi {
  // 
  struct LolEndOfGameLoginDataPacket {
    // 
    std::string platformId;
    // 
    std::vector<LolEndOfGameSimpleMessage> simpleMessages;
    // 
    LolEndOfGameLoginSummonerData allSummonerData;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameLoginDataPacket& v) {
    j["platformId"] = v.platformId;
    j["simpleMessages"] = v.simpleMessages;
    j["allSummonerData"] = v.allSummonerData;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameLoginDataPacket& v) {
    v.platformId = j.at("platformId").get<std::string>;
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolEndOfGameSimpleMessage>>;
    v.allSummonerData = j.at("allSummonerData").get<LolEndOfGameLoginSummonerData>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameLoginDataPacket_HPP
