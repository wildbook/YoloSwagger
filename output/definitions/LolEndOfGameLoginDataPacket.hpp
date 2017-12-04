#ifndef SWAGGER_TYPES_LolEndOfGameLoginDataPacket_HPP
#define SWAGGER_TYPES_LolEndOfGameLoginDataPacket_HPP
#include <json.hpp>
#include "LolEndOfGameSimpleMessage.hpp"
#include "LolEndOfGameLoginSummonerData.hpp"
namespace leagueapi {
  // 
  struct LolEndOfGameLoginDataPacket {
    // 
    LolEndOfGameLoginSummonerData allSummonerData;
    // 
    std::string platformId;
    // 
    std::vector<LolEndOfGameSimpleMessage> simpleMessages;
  };

  void to_json(nlohmann::json& j, const LolEndOfGameLoginDataPacket& v) {
    j["allSummonerData"] = v.allSummonerData;
    j["platformId"] = v.platformId;
    j["simpleMessages"] = v.simpleMessages;
  }

  void from_json(const nlohmann::json& j, LolEndOfGameLoginDataPacket& v) {
    v.allSummonerData = j.at("allSummonerData").get<LolEndOfGameLoginSummonerData>;
    v.platformId = j.at("platformId").get<std::string>;
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolEndOfGameSimpleMessage>>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameLoginDataPacket_HPP
