#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubPreferences_t {
    std::string primaryClubKey;
    bool shareClubAffiliation;
  };

  inline void to_json(nlohmann::json& j, const ClubPreferences_t& v) {
    j["primaryClubKey"] = v.primaryClubKey;
    j["shareClubAffiliation"] = v.shareClubAffiliation;
  }

  inline void from_json(const nlohmann::json& j, ClubPreferences_t& v) {
    v.primaryClubKey = j.at("primaryClubKey").get<std::string>();
    v.shareClubAffiliation = j.at("shareClubAffiliation").get<bool>();
  }
}
