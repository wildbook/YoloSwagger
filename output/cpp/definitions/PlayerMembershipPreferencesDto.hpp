#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerMembershipPreferencesDto_t {
    std::string primaryActiveClubKey;
    bool shareClubAffiliation;
  };

  inline void to_json(nlohmann::json& j, const PlayerMembershipPreferencesDto_t& v) {
    j["primaryActiveClubKey"] = v.primaryActiveClubKey;
    j["shareClubAffiliation"] = v.shareClubAffiliation;
  }

  inline void from_json(const nlohmann::json& j, PlayerMembershipPreferencesDto_t& v) {
    v.primaryActiveClubKey = j.at("primaryActiveClubKey").get<std::string>();
    v.shareClubAffiliation = j.at("shareClubAffiliation").get<bool>();
  }
  inline std::string to_string(const PlayerMembershipPreferencesDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
