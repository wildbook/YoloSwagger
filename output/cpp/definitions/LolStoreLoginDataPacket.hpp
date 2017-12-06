#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreSimpleDialogMessage.hpp"
#include "LolStoreAllSummonerData.hpp"
namespace leagueapi {
  struct LolStoreLoginDataPacket_t {
    LolStoreAllSummonerData_t allSummonerData;
    std::vector<LolStoreSimpleDialogMessage_t> simpleMessages;
  };

  inline void to_json(nlohmann::json& j, const LolStoreLoginDataPacket_t& v) {
    j["allSummonerData"] = v.allSummonerData;
    j["simpleMessages"] = v.simpleMessages;
  }

  inline void from_json(const nlohmann::json& j, LolStoreLoginDataPacket_t& v) {
    v.allSummonerData = j.at("allSummonerData").get<LolStoreAllSummonerData_t>();
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolStoreSimpleDialogMessage_t>>();
  }
}
