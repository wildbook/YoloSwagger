#ifndef SWAGGER_TYPES_BasePublicSummonerDTO_HPP
#define SWAGGER_TYPES_BasePublicSummonerDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct BasePublicSummonerDTO {
    // 
    std::string internalName;
    // 
    std::string name;
    // 
    int32_t profileIconId;
    // 
    std::string puuid;
    // 
    uint64_t sumId;
    // 
    uint64_t acctId;
    // 
    std::string previousSeasonHighestTier;
  };

  inline void to_json(nlohmann::json& j, const BasePublicSummonerDTO& v) {
    j["internalName"] = v.internalName;
    j["name"] = v.name;
    j["profileIconId"] = v.profileIconId;
    j["puuid"] = v.puuid;
    j["sumId"] = v.sumId;
    j["acctId"] = v.acctId;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
  }

  inline void from_json(const nlohmann::json& j, BasePublicSummonerDTO& v) {
    v.internalName = j.at("internalName").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.profileIconId = j.at("profileIconId").get<int32_t>;
    v.puuid = j.at("puuid").get<std::string>;
    v.sumId = j.at("sumId").get<uint64_t>;
    v.acctId = j.at("acctId").get<uint64_t>;
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_BasePublicSummonerDTO_HPP
