#pragma once
#include <json.hpp>
#include <optional>
#include "LolClubsPublicClubPreferences.hpp"
#include "LolClubsPublicPlayerClub.hpp"
#include "LolClubsPublicClubPlayer.hpp"
namespace leagueapi {
  struct LolClubsPublicPlayerClubMembership_t {
    std::vector<LolClubsPublicPlayerClub_t> activeClubs;
    LolClubsPublicClubPlayer_t info;
    LolClubsPublicClubPreferences_t preferences;
    std::string secureClubPresenceInfoString;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicPlayerClubMembership_t& v) {
    j["activeClubs"] = v.activeClubs;
    j["info"] = v.info;
    j["preferences"] = v.preferences;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicPlayerClubMembership_t& v) {
    v.activeClubs = j.at("activeClubs").get<std::vector<LolClubsPublicPlayerClub_t>>();
    v.info = j.at("info").get<LolClubsPublicClubPlayer_t>();
    v.preferences = j.at("preferences").get<LolClubsPublicClubPreferences_t>();
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>();
  }
}
