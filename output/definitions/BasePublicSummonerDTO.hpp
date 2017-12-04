#ifndef SWAGGER_TYPES_BasePublicSummonerDTO_HPP
#define SWAGGER_TYPES_BasePublicSummonerDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct BasePublicSummonerDTO {
    // 
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
    uint64_t sumId;
  };

  inline void to_json(nlohmann::json& j, const BasePublicSummonerDTO& v) {
    j["acctId"] = v.acctId;
    j["internalName"] = v.internalName;
    j["name"] = v.name;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["profileIconId"] = v.profileIconId;
    j["puuid"] = v.puuid;
    j["sumId"] = v.sumId;
  }

  inline void from_json(const nlohmann::json& j, BasePublicSummonerDTO& v) {
    v.acctId = j.at("acctId").get<uint64_t>;
    v.internalName = j.at("internalName").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>;
    v.profileIconId = j.at("profileIconId").get<int32_t>;
    v.puuid = j.at("puuid").get<std::string>;
    v.sumId = j.at("sumId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_BasePublicSummonerDTO_HPP
