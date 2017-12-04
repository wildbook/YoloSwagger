#ifndef SWAGGER_TYPES_LolLootLoginDataPacket_HPP
#define SWAGGER_TYPES_LolLootLoginDataPacket_HPP
#include <json.hpp>
#include "LolLootLoginSimpleMessage.hpp"
#include "LolLootLoginAllSummonerData.hpp"
namespace leagueapi {
  // 
  struct LolLootLoginDataPacket {
    // 
    LolLootLoginAllSummonerData allSummonerData;
    // 
    std::vector<LolLootLoginSimpleMessage> simpleMessages;
  };

  inline void to_json(nlohmann::json& j, const LolLootLoginDataPacket& v) {
    j["allSummonerData"] = v.allSummonerData;
    j["simpleMessages"] = v.simpleMessages;
  }

  inline void from_json(const nlohmann::json& j, LolLootLoginDataPacket& v) {
    v.allSummonerData = j.at("allSummonerData").get<LolLootLoginAllSummonerData>;
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolLootLoginSimpleMessage>>;
  }

}
#endif // SWAGGER_TYPES_LolLootLoginDataPacket_HPP
