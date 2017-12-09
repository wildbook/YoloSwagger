#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameSimpleMessage.hpp"
#include "LolEndOfGameLoginSummonerData.hpp"
namespace leagueapi {
  struct LolEndOfGameLoginDataPacket_t {
    std::string platformId;
    LolEndOfGameLoginSummonerData_t allSummonerData;
    std::vector<LolEndOfGameSimpleMessage_t> simpleMessages;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameLoginDataPacket_t& v) {
    j["platformId"] = v.platformId;
    j["allSummonerData"] = v.allSummonerData;
    j["simpleMessages"] = v.simpleMessages;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameLoginDataPacket_t& v) {
    v.platformId = j.at("platformId").get<std::string>();
    v.allSummonerData = j.at("allSummonerData").get<LolEndOfGameLoginSummonerData_t>();
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolEndOfGameSimpleMessage_t>>();
  }
  inline std::string to_string(const LolEndOfGameLoginDataPacket_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
