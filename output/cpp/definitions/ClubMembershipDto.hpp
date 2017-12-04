#ifndef SWAGGER_TYPES_ClubMembershipDto_HPP
#define SWAGGER_TYPES_ClubMembershipDto_HPP
#include <json.hpp>
#include "MemberSinceDto.hpp"
namespace leagueapi {
  // 
  struct ClubMembershipDto {
    // 
    std::vector<MemberSinceDto> invitedMembers;
    // 
    std::vector<MemberSinceDto> nominatedMembers;
    // 
    std::vector<MemberSinceDto> activeMembers;
    // 
    std::vector<MemberSinceDto> removedMembers;
    // 
    std::string clubKey;
  };

  inline void to_json(nlohmann::json& j, const ClubMembershipDto& v) {
    j["invitedMembers"] = v.invitedMembers;
    j["nominatedMembers"] = v.nominatedMembers;
    j["activeMembers"] = v.activeMembers;
    j["removedMembers"] = v.removedMembers;
    j["clubKey"] = v.clubKey;
  }

  inline void from_json(const nlohmann::json& j, ClubMembershipDto& v) {
    v.invitedMembers = j.at("invitedMembers").get<std::vector<MemberSinceDto>>;
    v.nominatedMembers = j.at("nominatedMembers").get<std::vector<MemberSinceDto>>;
    v.activeMembers = j.at("activeMembers").get<std::vector<MemberSinceDto>>;
    v.removedMembers = j.at("removedMembers").get<std::vector<MemberSinceDto>>;
    v.clubKey = j.at("clubKey").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ClubMembershipDto_HPP
