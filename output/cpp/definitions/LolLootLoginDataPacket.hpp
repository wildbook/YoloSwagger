#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootLoginAllSummonerData.hpp"
#include "LolLootLoginSimpleMessage.hpp"
namespace leagueapi {
  struct LolLootLoginDataPacket_t {
    LolLootLoginAllSummonerData_t allSummonerData;
    std::vector<LolLootLoginSimpleMessage_t> simpleMessages;
  };

  inline void to_json(nlohmann::json& j, const LolLootLoginDataPacket_t& v) {
    j["allSummonerData"] = v.allSummonerData;
    j["simpleMessages"] = v.simpleMessages;
  }

  inline void from_json(const nlohmann::json& j, LolLootLoginDataPacket_t& v) {
    v.allSummonerData = j.at("allSummonerData").get<LolLootLoginAllSummonerData_t>();
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolLootLoginSimpleMessage_t>>();
  }
  inline std::string to_string(const LolLootLoginDataPacket_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
