#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatChatLoginSummonerLevelAndPoints_t {
    uint64_t expPoints;
    uint32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatLoginSummonerLevelAndPoints_t& v) {
    j["expPoints"] = v.expPoints;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatLoginSummonerLevelAndPoints_t& v) {
    v.expPoints = j.at("expPoints").get<uint64_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
  }
  inline std::string to_string(const LolChatChatLoginSummonerLevelAndPoints_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
