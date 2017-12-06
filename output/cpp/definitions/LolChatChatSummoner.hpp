#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatChatSummoner_t {
    uint32_t summonerLevel;
    std::string displayName;
    uint64_t summonerId;
    int32_t profileIconId;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatSummoner_t& v) {
    j["summonerLevel"] = v.summonerLevel;
    j["displayName"] = v.displayName;
    j["summonerId"] = v.summonerId;
    j["profileIconId"] = v.profileIconId;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatSummoner_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
  }
}
