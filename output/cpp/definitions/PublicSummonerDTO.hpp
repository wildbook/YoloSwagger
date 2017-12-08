#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PublicSummonerDTO_t {
    std::string internalName;
    std::string name;
    int32_t profileIconId;
    std::string puuid;
    uint32_t summonerLevel;
    uint64_t acctId;
    std::string previousSeasonHighestTier;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const PublicSummonerDTO_t& v) {
    j["internalName"] = v.internalName;
    j["name"] = v.name;
    j["profileIconId"] = v.profileIconId;
    j["puuid"] = v.puuid;
    j["summonerLevel"] = v.summonerLevel;
    j["acctId"] = v.acctId;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, PublicSummonerDTO_t& v) {
    v.internalName = j.at("internalName").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.puuid = j.at("puuid").get<std::string>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.acctId = j.at("acctId").get<uint64_t>();
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const PublicSummonerDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
