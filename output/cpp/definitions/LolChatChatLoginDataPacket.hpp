#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatChatLoginSummonerData.hpp"
#include "LolChatChatPlayerStatSummaries.hpp"
namespace leagueapi {
  struct LolChatChatLoginDataPacket_t {
    LolChatChatPlayerStatSummaries_t playerStatSummaries;
    LolChatChatLoginSummonerData_t allSummonerData;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatLoginDataPacket_t& v) {
    j["playerStatSummaries"] = v.playerStatSummaries;
    j["allSummonerData"] = v.allSummonerData;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatLoginDataPacket_t& v) {
    v.playerStatSummaries = j.at("playerStatSummaries").get<LolChatChatPlayerStatSummaries_t>();
    v.allSummonerData = j.at("allSummonerData").get<LolChatChatLoginSummonerData_t>();
  }
  inline std::string to_string(const LolChatChatLoginDataPacket_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
