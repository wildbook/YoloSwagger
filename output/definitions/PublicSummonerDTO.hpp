#ifndef SWAGGER_TYPES_PublicSummonerDTO_HPP
#define SWAGGER_TYPES_PublicSummonerDTO_HPP
#include <json.hpp>
namespace test {
  // 
  struct PublicSummonerDTO {
'    // 
    uint64_t acctId;
    // 
    std::string internalName;
    // 
    std::string name;
    // 
    std::string previousSeasonHighestTier;
    // 
    int32_t profileIconId;
    // 
    std::string puuid;
    // 
    uint64_t summonerId;
    // 
    uint32_t summonerLevel;
  };

  void to_json(nlohmann::json& j, const PublicSummonerDTO& v) {
    j["acctId"] = v.acctId;
    j["internalName"] = v.internalName;
    j["name"] = v.name;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["profileIconId"] = v.profileIconId;
    j["puuid"] = v.puuid;
    j["summonerId"] = v.summonerId;
    j["summonerLevel"] = v.summonerLevel;
  }

  void from_json(const nlohmann::json& j, PublicSummonerDTO& v) {
    v.acctId = j.at("acctId").get<uint64_t>;
    v.internalName = j.at("internalName").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>;
    v.profileIconId = j.at("profileIconId").get<int32_t>;
    v.puuid = j.at("puuid").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_PublicSummonerDTO_HPP
