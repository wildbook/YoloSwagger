#ifndef SWAGGER_TYPES_LolLobbySummoner_HPP
#define SWAGGER_TYPES_LolLobbySummoner_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLobbySummoner {
'    // 
    uint64_t accountId;
    // 
    std::string displayName;
    // 
    int32_t profileIconId;
    // 
    std::string puuid;
    // 
    uint64_t summonerId;
    // 
    uint32_t summonerLevel;
  };

  void to_json(nlohmann::json& j, const LolLobbySummoner& v) {
    j["accountId"] = v.accountId;
    j["displayName"] = v.displayName;
    j["profileIconId"] = v.profileIconId;
    j["puuid"] = v.puuid;
    j["summonerId"] = v.summonerId;
    j["summonerLevel"] = v.summonerLevel;
  }

  void from_json(const nlohmann::json& j, LolLobbySummoner& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.displayName = j.at("displayName").get<std::string>;
    v.profileIconId = j.at("profileIconId").get<int32_t>;
    v.puuid = j.at("puuid").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbySummoner_HPP
