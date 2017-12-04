#ifndef SWAGGER_TYPES_ClubMembershipDto_HPP
#define SWAGGER_TYPES_ClubMembershipDto_HPP
#include <json.hpp>
#include "MemberSinceDto.hpp"
namespace leagueapi {
  // 
  struct ClubMembershipDto {
    // 
    std::vector<MemberSinceDto> activeMembers;
    // 
    std::string clubKey;
    // 
    std::vector<MemberSinceDto> invitedMembers;
    // 
    std::vector<MemberSinceDto> nominatedMembers;
    // 
    std::vector<MemberSinceDto> removedMembers;
  };

  inline void to_json(nlohmann::json& j, const ClubMembershipDto& v) {
    j["activeMembers"] = v.activeMembers;
    j["clubKey"] = v.clubKey;
    j["invitedMembers"] = v.invitedMembers;
    j["nominatedMembers"] = v.nominatedMembers;
    j["removedMembers"] = v.removedMembers;
  }

  inline void from_json(const nlohmann::json& j, ClubMembershipDto& v) {
    v.activeMembers = j.at("activeMembers").get<std::vector<MemberSinceDto>>;
    v.clubKey = j.at("clubKey").get<std::string>;
    v.invitedMembers = j.at("invitedMembers").get<std::vector<MemberSinceDto>>;
    v.nominatedMembers = j.at("nominatedMembers").get<std::vector<MemberSinceDto>>;
    v.removedMembers = j.at("removedMembers").get<std::vector<MemberSinceDto>>;
  }

}
#endif // SWAGGER_TYPES_ClubMembershipDto_HPP
