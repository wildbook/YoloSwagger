#ifndef SWAGGER_TYPES_LolClashClubsSummoner_HPP
#define SWAGGER_TYPES_LolClashClubsSummoner_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashClubsSummoner {
    // 
    std::string displayName;
    // 
    int32_t profileIconId;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolClashClubsSummoner& v) {
    j["displayName"] = v.displayName;
    j["profileIconId"] = v.profileIconId;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolClashClubsSummoner& v) {
    v.displayName = j.at("displayName").get<std::string>;
    v.profileIconId = j.at("profileIconId").get<int32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashClubsSummoner_HPP
