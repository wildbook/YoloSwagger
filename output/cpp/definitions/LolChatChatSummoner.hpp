#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatChatSummoner_t {
    int32_t_t profileIconId;
    std::string_t displayName;
    uint64_t_t summonerId;
    uint32_t_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatSummoner_t& v) {
    j["profileIconId"] = v.profileIconId;
    j["displayName"] = v.displayName;
    j["summonerId"] = v.summonerId;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatSummoner_t& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t_t>();
    v.displayName = j.at("displayName").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t_t>();
  }
  inline std::string to_string(const LolChatChatSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
