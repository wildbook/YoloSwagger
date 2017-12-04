#ifndef SWAGGER_TYPES_LolClubsPublicPlayerClub_HPP
#define SWAGGER_TYPES_LolClubsPublicPlayerClub_HPP
#include <json.hpp>
#include "LolClubsPublicClubMemberLists.hpp"
namespace leagueapi {
  // 
  struct LolClubsPublicPlayerClub {
    // 
    std::string key;
    // 
    LolClubsPublicClubMemberLists members;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicPlayerClub& v) {
    j["key"] = v.key;
    j["members"] = v.members;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicPlayerClub& v) {
    v.key = j.at("key").get<std::string>;
    v.members = j.at("members").get<LolClubsPublicClubMemberLists>;
  }

}
#endif // SWAGGER_TYPES_LolClubsPublicPlayerClub_HPP
