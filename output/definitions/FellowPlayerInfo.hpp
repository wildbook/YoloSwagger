#ifndef SWAGGER_TYPES_FellowPlayerInfo_HPP
#define SWAGGER_TYPES_FellowPlayerInfo_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct FellowPlayerInfo {
    // 
    uint64_t championId;
    // 
    uint64_t summonerId;
    // 
    uint64_t teamId;
  };

  void to_json(nlohmann::json& j, const FellowPlayerInfo& v) {
    j["championId"] = v.championId;
    j["summonerId"] = v.summonerId;
    j["teamId"] = v.teamId;
  }

  void from_json(const nlohmann::json& j, FellowPlayerInfo& v) {
    v.championId = j.at("championId").get<uint64_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.teamId = j.at("teamId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_FellowPlayerInfo_HPP
