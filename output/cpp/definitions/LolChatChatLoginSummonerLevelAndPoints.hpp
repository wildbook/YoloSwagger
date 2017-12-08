#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatChatLoginSummonerLevelAndPoints_t {
    uint32_t summonerLevel;
    uint64_t expPoints;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatLoginSummonerLevelAndPoints_t& v) {
    j["summonerLevel"] = v.summonerLevel;
    j["expPoints"] = v.expPoints;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatLoginSummonerLevelAndPoints_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.expPoints = j.at("expPoints").get<uint64_t>();
  }
  inline std::string to_string(const LolChatChatLoginSummonerLevelAndPoints_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
