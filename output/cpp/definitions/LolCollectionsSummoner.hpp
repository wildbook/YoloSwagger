#ifndef SWAGGER_TYPES_LolCollectionsSummoner_HPP
#define SWAGGER_TYPES_LolCollectionsSummoner_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsSummoner {
    // 
    int32_t profileIconId;
    // 
    uint32_t summonerLevel;
    // 
    uint64_t summonerId;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsSummoner& v) {
    j["profileIconId"] = v.profileIconId;
    j["summonerLevel"] = v.summonerLevel;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsSummoner& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>;
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsSummoner_HPP
