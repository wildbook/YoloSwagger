#ifndef SWAGGER_TYPES_ClubPlayer_HPP
#define SWAGGER_TYPES_ClubPlayer_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ClubPlayer {
    // 
    int32_t summonerIconId;
    // 
    uint64_t summonerId;
    // 
    std::string summonerName;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const ClubPlayer& v) {
    j["summonerIconId"] = v.summonerIconId;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, ClubPlayer& v) {
    v.summonerIconId = j.at("summonerIconId").get<int32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_ClubPlayer_HPP
