#ifndef SWAGGER_TYPES_LolLootLoginDataPacket_HPP
#define SWAGGER_TYPES_LolLootLoginDataPacket_HPP
#include <json.hpp>
#include "LolLootLoginSimpleMessage.hpp"
#include "LolLootLoginAllSummonerData.hpp"
namespace leagueapi {
  // 
  struct LolLootLoginDataPacket {
    // 
    std::vector<LolLootLoginSimpleMessage> simpleMessages;
    // 
    LolLootLoginAllSummonerData allSummonerData;
  };

  inline void to_json(nlohmann::json& j, const LolLootLoginDataPacket& v) {
    j["simpleMessages"] = v.simpleMessages;
    j["allSummonerData"] = v.allSummonerData;
  }

  inline void from_json(const nlohmann::json& j, LolLootLoginDataPacket& v) {
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolLootLoginSimpleMessage>>;
    v.allSummonerData = j.at("allSummonerData").get<LolLootLoginAllSummonerData>;
  }

}
#endif // SWAGGER_TYPES_LolLootLoginDataPacket_HPP
