#pragma once
#include <json.hpp>
#include <optional>
#include "LolClubsPublicPlayerClub.hpp"
#include "LolClubsPublicClubPreferences.hpp"
#include "LolClubsPublicClubPlayer.hpp"
namespace leagueapi {
  struct LolClubsPublicPlayerClubMembership_t {
    std::vector<LolClubsPublicPlayerClub_t> activeClubs;
    std::string secureClubPresenceInfoString;
    LolClubsPublicClubPlayer_t info;
    LolClubsPublicClubPreferences_t preferences;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicPlayerClubMembership_t& v) {
    j["activeClubs"] = v.activeClubs;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
    j["info"] = v.info;
    j["preferences"] = v.preferences;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicPlayerClubMembership_t& v) {
    v.activeClubs = j.at("activeClubs").get<std::vector<LolClubsPublicPlayerClub_t>>();
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>();
    v.info = j.at("info").get<LolClubsPublicClubPlayer_t>();
    v.preferences = j.at("preferences").get<LolClubsPublicClubPreferences_t>();
  }
  inline std::string to_string(const LolClubsPublicPlayerClubMembership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
