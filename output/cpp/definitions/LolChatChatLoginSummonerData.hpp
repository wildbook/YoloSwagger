#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatChatLoginSummonerLevelAndPoints.hpp"
namespace leagueapi {
  struct LolChatChatLoginSummonerData_t {
    LolChatChatLoginSummonerLevelAndPoints_t summonerLevelAndPoints;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatLoginSummonerData_t& v) {
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatLoginSummonerData_t& v) {
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<LolChatChatLoginSummonerLevelAndPoints_t>();
  }
  inline std::string to_string(const LolChatChatLoginSummonerData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
