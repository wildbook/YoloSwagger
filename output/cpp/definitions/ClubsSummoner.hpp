#ifndef SWAGGER_TYPES_ClubsSummoner_HPP
#define SWAGGER_TYPES_ClubsSummoner_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ClubsSummoner {
    // 
    int32_t profileIconId;
    // 
    std::string displayName;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const ClubsSummoner& v) {
    j["profileIconId"] = v.profileIconId;
    j["displayName"] = v.displayName;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, ClubsSummoner& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>;
    v.displayName = j.at("displayName").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_ClubsSummoner_HPP
