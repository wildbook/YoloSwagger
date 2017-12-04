#ifndef SWAGGER_TYPES_LolStoreLoginDataPacket_HPP
#define SWAGGER_TYPES_LolStoreLoginDataPacket_HPP
#include <json.hpp>
#include "LolStoreSimpleDialogMessage.hpp"
#include "LolStoreAllSummonerData.hpp"
namespace leagueapi {
  // 
  struct LolStoreLoginDataPacket {
    // 
    std::vector<LolStoreSimpleDialogMessage> simpleMessages;
    // 
    LolStoreAllSummonerData allSummonerData;
  };

  inline void to_json(nlohmann::json& j, const LolStoreLoginDataPacket& v) {
    j["simpleMessages"] = v.simpleMessages;
    j["allSummonerData"] = v.allSummonerData;
  }

  inline void from_json(const nlohmann::json& j, LolStoreLoginDataPacket& v) {
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolStoreSimpleDialogMessage>>;
    v.allSummonerData = j.at("allSummonerData").get<LolStoreAllSummonerData>;
  }

}
#endif // SWAGGER_TYPES_LolStoreLoginDataPacket_HPP
