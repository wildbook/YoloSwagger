#pragma once
#include <json.hpp>
#include <optional>
#include "MemberSinceDto.hpp"
namespace leagueapi {
  struct ClubMembershipDto_t {
    std::vector<MemberSinceDto_t> invitedMembers;
    std::vector<MemberSinceDto_t> activeMembers;
    std::vector<MemberSinceDto_t> nominatedMembers;
    std::string clubKey;
    std::vector<MemberSinceDto_t> removedMembers;
  };

  inline void to_json(nlohmann::json& j, const ClubMembershipDto_t& v) {
    j["invitedMembers"] = v.invitedMembers;
    j["activeMembers"] = v.activeMembers;
    j["nominatedMembers"] = v.nominatedMembers;
    j["clubKey"] = v.clubKey;
    j["removedMembers"] = v.removedMembers;
  }

  inline void from_json(const nlohmann::json& j, ClubMembershipDto_t& v) {
    v.invitedMembers = j.at("invitedMembers").get<std::vector<MemberSinceDto_t>>();
    v.activeMembers = j.at("activeMembers").get<std::vector<MemberSinceDto_t>>();
    v.nominatedMembers = j.at("nominatedMembers").get<std::vector<MemberSinceDto_t>>();
    v.clubKey = j.at("clubKey").get<std::string>();
    v.removedMembers = j.at("removedMembers").get<std::vector<MemberSinceDto_t>>();
  }
  inline std::string to_string(const ClubMembershipDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
