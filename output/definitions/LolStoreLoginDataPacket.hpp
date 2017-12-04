#ifndef SWAGGER_TYPES_LolStoreLoginDataPacket_HPP
#define SWAGGER_TYPES_LolStoreLoginDataPacket_HPP
#include <json.hpp>
#include "LolStoreSimpleDialogMessage.hpp"
#include "LolStoreAllSummonerData.hpp"
namespace leagueapi {
  // 
  struct LolStoreLoginDataPacket {
    // 
    LolStoreAllSummonerData allSummonerData;
    // 
    std::vector<LolStoreSimpleDialogMessage> simpleMessages;
  };

  inline void to_json(nlohmann::json& j, const LolStoreLoginDataPacket& v) {
    j["allSummonerData"] = v.allSummonerData;
    j["simpleMessages"] = v.simpleMessages;
  }

  inline void from_json(const nlohmann::json& j, LolStoreLoginDataPacket& v) {
    v.allSummonerData = j.at("allSummonerData").get<LolStoreAllSummonerData>;
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolStoreSimpleDialogMessage>>;
  }

}
#endif // SWAGGER_TYPES_LolStoreLoginDataPacket_HPP
