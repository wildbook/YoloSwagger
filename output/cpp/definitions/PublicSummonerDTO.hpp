#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PublicSummonerDTO_t {
    uint32_t summonerLevel;
    std::string name;
    std::string puuid;
    int32_t profileIconId;
    std::string internalName;
    uint64_t summonerId;
    std::string previousSeasonHighestTier;
    uint64_t acctId;
  };

  inline void to_json(nlohmann::json& j, const PublicSummonerDTO_t& v) {
    j["summonerLevel"] = v.summonerLevel;
    j["name"] = v.name;
    j["puuid"] = v.puuid;
    j["profileIconId"] = v.profileIconId;
    j["internalName"] = v.internalName;
    j["summonerId"] = v.summonerId;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["acctId"] = v.acctId;
  }

  inline void from_json(const nlohmann::json& j, PublicSummonerDTO_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.name = j.at("name").get<std::string>();
    v.puuid = j.at("puuid").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.internalName = j.at("internalName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
    v.acctId = j.at("acctId").get<uint64_t>();
  }
}
