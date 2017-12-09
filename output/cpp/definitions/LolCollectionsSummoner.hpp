#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsSummoner_t {
    int32_t profileIconId;
    uint32_t summonerLevel;
    uint64_t accountId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsSummoner_t& v) {
    j["profileIconId"] = v.profileIconId;
    j["summonerLevel"] = v.summonerLevel;
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsSummoner_t& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolCollectionsSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
