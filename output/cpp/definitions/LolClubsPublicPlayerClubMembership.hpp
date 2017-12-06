#pragma once
#include <json.hpp>
#include <optional>
#include "LolClubsPublicClubPreferences.hpp"
#include "LolClubsPublicPlayerClub.hpp"
#include "LolClubsPublicClubPlayer.hpp"
namespace leagueapi {
  struct LolClubsPublicPlayerClubMembership_t {
    LolClubsPublicClubPreferences_t preferences;
    std::vector<LolClubsPublicPlayerClub_t> activeClubs;
    LolClubsPublicClubPlayer_t info;
    std::string secureClubPresenceInfoString;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicPlayerClubMembership_t& v) {
    j["preferences"] = v.preferences;
    j["activeClubs"] = v.activeClubs;
    j["info"] = v.info;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicPlayerClubMembership_t& v) {
    v.preferences = j.at("preferences").get<LolClubsPublicClubPreferences_t>();
    v.activeClubs = j.at("activeClubs").get<std::vector<LolClubsPublicPlayerClub_t>>();
    v.info = j.at("info").get<LolClubsPublicClubPlayer_t>();
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>();
  }
}
