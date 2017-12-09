#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PublicSummonerDTO_t {
    std::string previousSeasonHighestTier;
    uint64_t summonerId;
    std::string internalName;
    uint64_t acctId;
    uint32_t summonerLevel;
    std::string name;
    int32_t profileIconId;
    std::string puuid;
  };

  inline void to_json(nlohmann::json& j, const PublicSummonerDTO_t& v) {
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["summonerId"] = v.summonerId;
    j["internalName"] = v.internalName;
    j["acctId"] = v.acctId;
    j["summonerLevel"] = v.summonerLevel;
    j["name"] = v.name;
    j["profileIconId"] = v.profileIconId;
    j["puuid"] = v.puuid;
  }

  inline void from_json(const nlohmann::json& j, PublicSummonerDTO_t& v) {
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.internalName = j.at("internalName").get<std::string>();
    v.acctId = j.at("acctId").get<uint64_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.name = j.at("name").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.puuid = j.at("puuid").get<std::string>();
  }
  inline std::string to_string(const PublicSummonerDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
