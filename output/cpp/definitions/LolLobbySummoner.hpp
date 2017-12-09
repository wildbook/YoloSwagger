#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbySummoner_t {
    int32_t profileIconId;
    std::string puuid;
    uint64_t accountId;
    uint64_t summonerId;
    std::string displayName;
    uint32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolLobbySummoner_t& v) {
    j["profileIconId"] = v.profileIconId;
    j["puuid"] = v.puuid;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["displayName"] = v.displayName;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolLobbySummoner_t& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
  }
  inline std::string to_string(const LolLobbySummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
