#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameLoginSummonerData.hpp"
#include "LolEndOfGameSimpleMessage.hpp"
namespace leagueapi {
  struct LolEndOfGameLoginDataPacket_t {
    std::string_t platformId;
    std::vector<LolEndOfGameSimpleMessage_t> simpleMessages;
    LolEndOfGameLoginSummonerData_t allSummonerData;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameLoginDataPacket_t& v) {
    j["platformId"] = v.platformId;
    j["simpleMessages"] = v.simpleMessages;
    j["allSummonerData"] = v.allSummonerData;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameLoginDataPacket_t& v) {
    v.platformId = j.at("platformId").get<std::string_t>();
    v.simpleMessages = j.at("simpleMessages").get<std::vector<LolEndOfGameSimpleMessage_t>>();
    v.allSummonerData = j.at("allSummonerData").get<LolEndOfGameLoginSummonerData_t>();
  }
  inline std::string to_string(const LolEndOfGameLoginDataPacket_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
