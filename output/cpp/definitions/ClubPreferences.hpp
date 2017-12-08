#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubPreferences_t {
    bool shareClubAffiliation;
    std::string primaryClubKey;
  };

  inline void to_json(nlohmann::json& j, const ClubPreferences_t& v) {
    j["shareClubAffiliation"] = v.shareClubAffiliation;
    j["primaryClubKey"] = v.primaryClubKey;
  }

  inline void from_json(const nlohmann::json& j, ClubPreferences_t& v) {
    v.shareClubAffiliation = j.at("shareClubAffiliation").get<bool>();
    v.primaryClubKey = j.at("primaryClubKey").get<std::string>();
  }
  inline std::string to_string(const ClubPreferences_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
