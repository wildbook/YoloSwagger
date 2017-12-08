#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootLoginSimpleMessage.hpp"
#include "LolLootLoginAllSummonerData.hpp"
namespace leagueapi {
  struct LolLootLoginDataPacket_t {
    std::vector<LolLootLoginSimpleMessage_t> simpleMessages;
    LolLootLoginAllSummonerData_t allSummonerData;
  };

  inline void to_json(nlohmann::json& j, const LolLootLoginDataPacket_t& v) {
    j["simpleMessages"] = v.simpleMessages;
    j["allSummonerData"] = v.allSummonerData;
  }

  inline void from_json(const nlohmann::json& j, LolLootLoginDataPacket_t& v) {
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolLootLoginSimpleMessage_t>>();
    v.allSummonerData = j.at("allSummonerData").get<LolLootLoginAllSummonerData_t>();
  }
  inline std::string to_string(const LolLootLoginDataPacket_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
