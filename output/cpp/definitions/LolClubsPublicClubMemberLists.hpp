#pragma once
#include <json.hpp>
#include <optional>
#include "LolClubsPublicClubPlayer.hpp"
namespace leagueapi {
  struct LolClubsPublicClubMemberLists_t {
    std::vector<LolClubsPublicClubPlayer_t> activeMembers;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicClubMemberLists_t& v) {
    j["activeMembers"] = v.activeMembers;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicClubMemberLists_t& v) {
    v.activeMembers = j.at("activeMembers").get<std::vector<LolClubsPublicClubPlayer_t>>();
  }
  inline std::string to_string(const LolClubsPublicClubMemberLists_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
