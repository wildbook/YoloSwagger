#pragma once
#include <json.hpp>
#include <optional>
#include "MemberSinceDto.hpp"
namespace leagueapi {
  struct ClubMembershipDto_t {
    std::string clubKey;
    std::vector<MemberSinceDto_t> removedMembers;
    std::vector<MemberSinceDto_t> invitedMembers;
    std::vector<MemberSinceDto_t> nominatedMembers;
    std::vector<MemberSinceDto_t> activeMembers;
  };

  inline void to_json(nlohmann::json& j, const ClubMembershipDto_t& v) {
    j["clubKey"] = v.clubKey;
    j["removedMembers"] = v.removedMembers;
    j["invitedMembers"] = v.invitedMembers;
    j["nominatedMembers"] = v.nominatedMembers;
    j["activeMembers"] = v.activeMembers;
  }

  inline void from_json(const nlohmann::json& j, ClubMembershipDto_t& v) {
    v.clubKey = j.at("clubKey").get<std::string>();
    v.removedMembers = j.at("removedMembers").get<std::vector<MemberSinceDto_t>>();
    v.invitedMembers = j.at("invitedMembers").get<std::vector<MemberSinceDto_t>>();
    v.nominatedMembers = j.at("nominatedMembers").get<std::vector<MemberSinceDto_t>>();
    v.activeMembers = j.at("activeMembers").get<std::vector<MemberSinceDto_t>>();
  }
  inline std::string to_string(const ClubMembershipDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
