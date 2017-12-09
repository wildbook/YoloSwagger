#pragma once
#include <json.hpp>
#include <optional>
#include "ClubMember.hpp"
namespace leagueapi {
  struct ClubMemberLists_t {
    std::vector<ClubMember_t> activeMembers;
    std::vector<ClubMember_t> nominatedMembers;
    std::vector<ClubMember_t> removedMembers;
    std::vector<ClubMember_t> invitedMembers;
  };

  inline void to_json(nlohmann::json& j, const ClubMemberLists_t& v) {
    j["activeMembers"] = v.activeMembers;
    j["nominatedMembers"] = v.nominatedMembers;
    j["removedMembers"] = v.removedMembers;
    j["invitedMembers"] = v.invitedMembers;
  }

  inline void from_json(const nlohmann::json& j, ClubMemberLists_t& v) {
    v.activeMembers = j.at("activeMembers").get<std::vector<ClubMember_t>>();
    v.nominatedMembers = j.at("nominatedMembers").get<std::vector<ClubMember_t>>();
    v.removedMembers = j.at("removedMembers").get<std::vector<ClubMember_t>>();
    v.invitedMembers = j.at("invitedMembers").get<std::vector<ClubMember_t>>();
  }
  inline std::string to_string(const ClubMemberLists_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
