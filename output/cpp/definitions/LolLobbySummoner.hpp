#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbySummoner_t {
    uint32_t summonerLevel;
    uint64_t accountId;
    std::string displayName;
    std::string puuid;
    int32_t profileIconId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbySummoner_t& v) {
    j["summonerLevel"] = v.summonerLevel;
    j["accountId"] = v.accountId;
    j["displayName"] = v.displayName;
    j["puuid"] = v.puuid;
    j["profileIconId"] = v.profileIconId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbySummoner_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.puuid = j.at("puuid").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolLobbySummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
