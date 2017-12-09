#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatChatSummoner_t {
    std::string displayName;
    uint64_t summonerId;
    uint32_t summonerLevel;
    int32_t profileIconId;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatSummoner_t& v) {
    j["displayName"] = v.displayName;
    j["summonerId"] = v.summonerId;
    j["summonerLevel"] = v.summonerLevel;
    j["profileIconId"] = v.profileIconId;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatSummoner_t& v) {
    v.displayName = j.at("displayName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
  }
  inline std::string to_string(const LolChatChatSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
