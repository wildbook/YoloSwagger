#pragma once
#include <json.hpp>
#include <optional>
#include "LolClubsPublicClubMemberLists.hpp"
namespace leagueapi {
  struct LolClubsPublicPlayerClub_t {
    LolClubsPublicClubMemberLists_t members;
    std::string_t key;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicPlayerClub_t& v) {
    j["members"] = v.members;
    j["key"] = v.key;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicPlayerClub_t& v) {
    v.members = j.at("members").get<LolClubsPublicClubMemberLists_t>();
    v.key = j.at("key").get<std::string_t>();
  }
  inline std::string to_string(const LolClubsPublicPlayerClub_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
