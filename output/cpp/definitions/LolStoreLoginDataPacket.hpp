#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreSimpleDialogMessage.hpp"
#include "LolStoreAllSummonerData.hpp"
namespace leagueapi {
  struct LolStoreLoginDataPacket_t {
    std::vector<LolStoreSimpleDialogMessage_t> simpleMessages;
    LolStoreAllSummonerData_t allSummonerData;
  };

  inline void to_json(nlohmann::json& j, const LolStoreLoginDataPacket_t& v) {
    j["simpleMessages"] = v.simpleMessages;
    j["allSummonerData"] = v.allSummonerData;
  }

  inline void from_json(const nlohmann::json& j, LolStoreLoginDataPacket_t& v) {
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolStoreSimpleDialogMessage_t>>();
    v.allSummonerData = j.at("allSummonerData").get<LolStoreAllSummonerData_t>();
  }
  inline std::string to_string(const LolStoreLoginDataPacket_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
