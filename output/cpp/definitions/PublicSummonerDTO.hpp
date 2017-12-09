#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PublicSummonerDTO_t {
    int32_t profileIconId;
    std::string puuid;
    std::string internalName;
    std::string previousSeasonHighestTier;
    std::string name;
    uint32_t summonerLevel;
    uint64_t summonerId;
    uint64_t acctId;
  };

  inline void to_json(nlohmann::json& j, const PublicSummonerDTO_t& v) {
    j["profileIconId"] = v.profileIconId;
    j["puuid"] = v.puuid;
    j["internalName"] = v.internalName;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["name"] = v.name;
    j["summonerLevel"] = v.summonerLevel;
    j["summonerId"] = v.summonerId;
    j["acctId"] = v.acctId;
  }

  inline void from_json(const nlohmann::json& j, PublicSummonerDTO_t& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.internalName = j.at("internalName").get<std::string>();
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.acctId = j.at("acctId").get<uint64_t>();
  }
  inline std::string to_string(const PublicSummonerDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
