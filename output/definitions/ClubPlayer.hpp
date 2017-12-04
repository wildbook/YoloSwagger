#ifndef SWAGGER_TYPES_ClubPlayer_HPP
#define SWAGGER_TYPES_ClubPlayer_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ClubPlayer {
    // 
    uint64_t accountId;
    // 
    int32_t summonerIconId;
    // 
    uint64_t summonerId;
    // 
    std::string summonerName;
  };

  void to_json(nlohmann::json& j, const ClubPlayer& v) {
    j["accountId"] = v.accountId;
    j["summonerIconId"] = v.summonerIconId;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  void from_json(const nlohmann::json& j, ClubPlayer& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.summonerIconId = j.at("summonerIconId").get<int32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ClubPlayer_HPP
