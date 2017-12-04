#ifndef SWAGGER_TYPES_ClubMemberLists_HPP
#define SWAGGER_TYPES_ClubMemberLists_HPP
#include <json.hpp>
#include "ClubMember.hpp"
namespace leagueapi {
  // 
  struct ClubMemberLists {
    // 
    std::vector<ClubMember> invitedMembers;
    // 
    std::vector<ClubMember> nominatedMembers;
    // 
    std::vector<ClubMember> activeMembers;
    // 
    std::vector<ClubMember> removedMembers;
  };

  inline void to_json(nlohmann::json& j, const ClubMemberLists& v) {
    j["invitedMembers"] = v.invitedMembers;
    j["nominatedMembers"] = v.nominatedMembers;
    j["activeMembers"] = v.activeMembers;
    j["removedMembers"] = v.removedMembers;
  }

  inline void from_json(const nlohmann::json& j, ClubMemberLists& v) {
    v.invitedMembers = j.at("invitedMembers").get<std::vector<ClubMember>>;
    v.nominatedMembers = j.at("nominatedMembers").get<std::vector<ClubMember>>;
    v.activeMembers = j.at("activeMembers").get<std::vector<ClubMember>>;
    v.removedMembers = j.at("removedMembers").get<std::vector<ClubMember>>;
  }

}
#endif // SWAGGER_TYPES_ClubMemberLists_HPP
