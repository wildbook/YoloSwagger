#ifndef SWAGGER_TYPES_LolCollectionsSummoner_HPP
#define SWAGGER_TYPES_LolCollectionsSummoner_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsSummoner {
    // 
    uint64_t accountId;
    // 
    int32_t profileIconId;
    // 
    uint64_t summonerId;
    // 
    uint32_t summonerLevel;
  };

  void to_json(nlohmann::json& j, const LolCollectionsSummoner& v) {
    j["accountId"] = v.accountId;
    j["profileIconId"] = v.profileIconId;
    j["summonerId"] = v.summonerId;
    j["summonerLevel"] = v.summonerLevel;
  }

  void from_json(const nlohmann::json& j, LolCollectionsSummoner& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.profileIconId = j.at("profileIconId").get<int32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsSummoner_HPP
