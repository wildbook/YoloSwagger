#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerMembershipPreferencesDto_t {
    bool shareClubAffiliation;
    std::string primaryActiveClubKey;
  };

  inline void to_json(nlohmann::json& j, const PlayerMembershipPreferencesDto_t& v) {
    j["shareClubAffiliation"] = v.shareClubAffiliation;
    j["primaryActiveClubKey"] = v.primaryActiveClubKey;
  }

  inline void from_json(const nlohmann::json& j, PlayerMembershipPreferencesDto_t& v) {
    v.shareClubAffiliation = j.at("shareClubAffiliation").get<bool>();
    v.primaryActiveClubKey = j.at("primaryActiveClubKey").get<std::string>();
  }
  inline std::string to_string(const PlayerMembershipPreferencesDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
