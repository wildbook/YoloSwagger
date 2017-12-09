#pragma once
#include <json.hpp>
#include <optional>
#include "LolClubsPublicClubPlayer.hpp"
#include "LolClubsPublicClubPreferences.hpp"
#include "LolClubsPublicPlayerClub.hpp"
namespace leagueapi {
  struct LolClubsPublicPlayerClubMembership_t {
    std::string secureClubPresenceInfoString;
    LolClubsPublicClubPreferences_t preferences;
    std::vector<LolClubsPublicPlayerClub_t> activeClubs;
    LolClubsPublicClubPlayer_t info;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicPlayerClubMembership_t& v) {
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
    j["preferences"] = v.preferences;
    j["activeClubs"] = v.activeClubs;
    j["info"] = v.info;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicPlayerClubMembership_t& v) {
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>();
    v.preferences = j.at("preferences").get<LolClubsPublicClubPreferences_t>();
    v.activeClubs = j.at("activeClubs").get<std::vector<LolClubsPublicPlayerClub_t>>();
    v.info = j.at("info").get<LolClubsPublicClubPlayer_t>();
  }
  inline std::string to_string(const LolClubsPublicPlayerClubMembership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
