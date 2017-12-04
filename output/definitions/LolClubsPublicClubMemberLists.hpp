#ifndef SWAGGER_TYPES_LolClubsPublicClubMemberLists_HPP
#define SWAGGER_TYPES_LolClubsPublicClubMemberLists_HPP
#include <json.hpp>
#include "LolClubsPublicClubPlayer.hpp"
namespace leagueapi {
  // 
  struct LolClubsPublicClubMemberLists {
    // 
    std::vector<LolClubsPublicClubPlayer> activeMembers;
  };

  void to_json(nlohmann::json& j, const LolClubsPublicClubMemberLists& v) {
    j["activeMembers"] = v.activeMembers;
  }

  void from_json(const nlohmann::json& j, LolClubsPublicClubMemberLists& v) {
    v.activeMembers = j.at("activeMembers").get<std::vector<LolClubsPublicClubPlayer>>;
  }

}
#endif // SWAGGER_TYPES_LolClubsPublicClubMemberLists_HPP
