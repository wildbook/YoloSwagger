#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatChatLoginSummonerData.hpp"
#include "LolChatChatPlayerStatSummaries.hpp"
namespace leagueapi {
  struct LolChatChatLoginDataPacket_t {
    LolChatChatLoginSummonerData_t allSummonerData;
    LolChatChatPlayerStatSummaries_t playerStatSummaries;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatLoginDataPacket_t& v) {
    j["allSummonerData"] = v.allSummonerData;
    j["playerStatSummaries"] = v.playerStatSummaries;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatLoginDataPacket_t& v) {
    v.allSummonerData = j.at("allSummonerData").get<LolChatChatLoginSummonerData_t>();
    v.playerStatSummaries = j.at("playerStatSummaries").get<LolChatChatPlayerStatSummaries_t>();
  }
  inline std::string to_string(const LolChatChatLoginDataPacket_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
