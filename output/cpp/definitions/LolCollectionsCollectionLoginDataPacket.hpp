#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsSummonerData.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionLoginDataPacket_t {
    LolCollectionsSummonerData_t allSummonerData;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionLoginDataPacket_t& v) {
    j["allSummonerData"] = v.allSummonerData;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionLoginDataPacket_t& v) {
    v.allSummonerData = j.at("allSummonerData").get<LolCollectionsSummonerData_t>();
  }
}
