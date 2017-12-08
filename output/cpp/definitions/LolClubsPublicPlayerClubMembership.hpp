#pragma once
#include <json.hpp>
#include <optional>
#include "LolClubsPublicClubPlayer.hpp"
#include "LolClubsPublicClubPreferences.hpp"
#include "LolClubsPublicPlayerClub.hpp"
namespace leagueapi {
  struct LolClubsPublicPlayerClubMembership_t {
    LolClubsPublicClubPlayer_t info;
    std::string secureClubPresenceInfoString;
    LolClubsPublicClubPreferences_t preferences;
    std::vector<LolClubsPublicPlayerClub_t> activeClubs;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicPlayerClubMembership_t& v) {
    j["info"] = v.info;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
    j["preferences"] = v.preferences;
    j["activeClubs"] = v.activeClubs;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicPlayerClubMembership_t& v) {
    v.info = j.at("info").get<LolClubsPublicClubPlayer_t>();
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>();
    v.preferences = j.at("preferences").get<LolClubsPublicClubPreferences_t>();
    v.activeClubs = j.at("activeClubs").get<std::vector<LolClubsPublicPlayerClub_t>>();
  }
  inline std::string to_string(const LolClubsPublicPlayerClubMembership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
