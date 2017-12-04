#ifndef SWAGGER_TYPES_PublicSummonerDTO_HPP
#define SWAGGER_TYPES_PublicSummonerDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PublicSummonerDTO {
    // 
    std::string internalName;
    // 
    std::string name;
    // 
    int32_t profileIconId;
    // 
    std::string puuid;
    // 
    uint32_t summonerLevel;
    // 
    uint64_t acctId;
    // 
    std::string previousSeasonHighestTier;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const PublicSummonerDTO& v) {
    j["internalName"] = v.internalName;
    j["name"] = v.name;
    j["profileIconId"] = v.profileIconId;
    j["puuid"] = v.puuid;
    j["summonerLevel"] = v.summonerLevel;
    j["acctId"] = v.acctId;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, PublicSummonerDTO& v) {
    v.internalName = j.at("internalName").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.profileIconId = j.at("profileIconId").get<int32_t>;
    v.puuid = j.at("puuid").get<std::string>;
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
    v.acctId = j.at("acctId").get<uint64_t>;
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_PublicSummonerDTO_HPP
