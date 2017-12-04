#ifndef SWAGGER_TYPES_ClubMemberLists_HPP
#define SWAGGER_TYPES_ClubMemberLists_HPP
#include <json.hpp>
#include "ClubMember.hpp"
namespace leagueapi {
  // 
  struct ClubMemberLists {
    // 
    std::vector<ClubMember> activeMembers;
    // 
    std::vector<ClubMember> invitedMembers;
    // 
    std::vector<ClubMember> nominatedMembers;
    // 
    std::vector<ClubMember> removedMembers;
  };

  void to_json(nlohmann::json& j, const ClubMemberLists& v) {
    j["activeMembers"] = v.activeMembers;
    j["invitedMembers"] = v.invitedMembers;
    j["nominatedMembers"] = v.nominatedMembers;
    j["removedMembers"] = v.removedMembers;
  }

  void from_json(const nlohmann::json& j, ClubMemberLists& v) {
    v.activeMembers = j.at("activeMembers").get<std::vector<ClubMember>>;
    v.invitedMembers = j.at("invitedMembers").get<std::vector<ClubMember>>;
    v.nominatedMembers = j.at("nominatedMembers").get<std::vector<ClubMember>>;
    v.removedMembers = j.at("removedMembers").get<std::vector<ClubMember>>;
  }

}
#endif // SWAGGER_TYPES_ClubMemberLists_HPP
