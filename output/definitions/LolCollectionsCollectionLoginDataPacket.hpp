#ifndef SWAGGER_TYPES_LolCollectionsCollectionLoginDataPacket_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionLoginDataPacket_HPP
#include <json.hpp>
#include "LolCollectionsSummonerData.hpp"
namespace leagueapi {
  // 
  struct LolCollectionsCollectionLoginDataPacket {
    // 
    LolCollectionsSummonerData allSummonerData;
  };

  void to_json(nlohmann::json& j, const LolCollectionsCollectionLoginDataPacket& v) {
    j["allSummonerData"] = v.allSummonerData;
  }

  void from_json(const nlohmann::json& j, LolCollectionsCollectionLoginDataPacket& v) {
    v.allSummonerData = j.at("allSummonerData").get<LolCollectionsSummonerData>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionLoginDataPacket_HPP
