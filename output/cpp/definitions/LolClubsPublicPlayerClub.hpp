#pragma once
#include <json.hpp>
#include <optional>
#include "LolClubsPublicClubMemberLists.hpp"
namespace leagueapi {
  struct LolClubsPublicPlayerClub_t {
    std::string key;
    LolClubsPublicClubMemberLists_t members;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicPlayerClub_t& v) {
    j["key"] = v.key;
    j["members"] = v.members;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicPlayerClub_t& v) {
    v.key = j.at("key").get<std::string>();
    v.members = j.at("members").get<LolClubsPublicClubMemberLists_t>();
  }
  inline std::string to_string(const LolClubsPublicPlayerClub_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
