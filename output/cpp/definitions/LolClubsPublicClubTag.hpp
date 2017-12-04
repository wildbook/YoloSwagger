#ifndef SWAGGER_TYPES_LolClubsPublicClubTag_HPP
#define SWAGGER_TYPES_LolClubsPublicClubTag_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClubsPublicClubTag {
    // 
    std::string clubTag;
    // 
    std::string clubName;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicClubTag& v) {
    j["clubTag"] = v.clubTag;
    j["clubName"] = v.clubName;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicClubTag& v) {
    v.clubTag = j.at("clubTag").get<std::string>;
    v.clubName = j.at("clubName").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClubsPublicClubTag_HPP
