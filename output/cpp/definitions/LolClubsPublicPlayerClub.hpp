#ifndef SWAGGER_TYPES_LolClubsPublicPlayerClub_HPP
#define SWAGGER_TYPES_LolClubsPublicPlayerClub_HPP
#include <json.hpp>
#include "LolClubsPublicClubMemberLists.hpp"
namespace leagueapi {
  // 
  struct LolClubsPublicPlayerClub {
    // 
    LolClubsPublicClubMemberLists members;
    // 
    std::string key;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicPlayerClub& v) {
    j["members"] = v.members;
    j["key"] = v.key;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicPlayerClub& v) {
    v.members = j.at("members").get<LolClubsPublicClubMemberLists>;
    v.key = j.at("key").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolClubsPublicPlayerClub_HPP
