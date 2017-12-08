#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerMembershipPreferencesDto_t {
    std::string_t primaryActiveClubKey;
    bool_t shareClubAffiliation;
  };

  inline void to_json(nlohmann::json& j, const PlayerMembershipPreferencesDto_t& v) {
    j["primaryActiveClubKey"] = v.primaryActiveClubKey;
    j["shareClubAffiliation"] = v.shareClubAffiliation;
  }

  inline void from_json(const nlohmann::json& j, PlayerMembershipPreferencesDto_t& v) {
    v.primaryActiveClubKey = j.at("primaryActiveClubKey").get<std::string_t>();
    v.shareClubAffiliation = j.at("shareClubAffiliation").get<bool_t>();
  }
  inline std::string to_string(const PlayerMembershipPreferencesDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
