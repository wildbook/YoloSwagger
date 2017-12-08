#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PublicSummonerDTO_t {
    std::string puuid;
    std::string previousSeasonHighestTier;
    uint32_t summonerLevel;
    std::string internalName;
    int32_t profileIconId;
    uint64_t acctId;
    std::string name;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const PublicSummonerDTO_t& v) {
    j["puuid"] = v.puuid;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["summonerLevel"] = v.summonerLevel;
    j["internalName"] = v.internalName;
    j["profileIconId"] = v.profileIconId;
    j["acctId"] = v.acctId;
    j["name"] = v.name;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, PublicSummonerDTO_t& v) {
    v.puuid = j.at("puuid").get<std::string>();
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.internalName = j.at("internalName").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.acctId = j.at("acctId").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const PublicSummonerDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
