#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbySummoner_t {
    int32_t_t profileIconId;
    std::string_t displayName;
    std::string_t puuid;
    uint32_t_t summonerLevel;
    uint64_t_t summonerId;
    uint64_t_t accountId;
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
    v.profileIconId = j.at("profileIconId").get<int32_t_t>();
    v.displayName = j.at("displayName").get<std::string_t>();
    v.puuid = j.at("puuid").get<std::string_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolLobbySummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
