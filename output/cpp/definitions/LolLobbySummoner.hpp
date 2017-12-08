#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbySummoner_t {
    int32_t profileIconId;
    std::string displayName;
    std::string puuid;
    uint32_t summonerLevel;
    uint64_t summonerId;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbySummoner_t& v) {
    j["profileIconId"] = v.profileIconId;
    j["displayName"] = v.displayName;
    j["puuid"] = v.puuid;
    j["summonerLevel"] = v.summonerLevel;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbySummoner_t& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.puuid = j.at("puuid").get<std::string>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const LolLobbySummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
