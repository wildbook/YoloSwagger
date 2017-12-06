#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatChatSummoner_t {
    std::string displayName;
    int32_t profileIconId;
    uint64_t summonerId;
    uint32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatSummoner_t& v) {
    j["displayName"] = v.displayName;
    j["profileIconId"] = v.profileIconId;
    j["summonerId"] = v.summonerId;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatSummoner_t& v) {
    v.displayName = j.at("displayName").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
  }
}
