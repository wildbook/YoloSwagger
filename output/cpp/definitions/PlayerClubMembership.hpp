#pragma once
#include <json.hpp>
#include <optional>
#include "Club.hpp"
#include "ClubPlayer.hpp"
#include "ClubsConfig.hpp"
#include "ClubPreferences.hpp"
#include "ClubInvite.hpp"
#include "PlayerClub.hpp"
namespace leagueapi {
  struct PlayerClubMembership_t {
    ClubPreferences_t preferences;
    std::vector<PlayerClub_t> activeClubs;
    ClubsConfig_t clubsServerConfig;
    std::string secureClubPresenceInfoString;
    std::vector<ClubInvite_t> pendingInvites;
    ClubPlayer_t info;
    std::vector<Club_t> revokedInviteClubs;
    std::vector<Club_t> removedClubs;
  };

  inline void to_json(nlohmann::json& j, const PlayerClubMembership_t& v) {
    j["preferences"] = v.preferences;
    j["activeClubs"] = v.activeClubs;
    j["clubsServerConfig"] = v.clubsServerConfig;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
    j["pendingInvites"] = v.pendingInvites;
    j["info"] = v.info;
    j["revokedInviteClubs"] = v.revokedInviteClubs;
    j["removedClubs"] = v.removedClubs;
  }

  inline void from_json(const nlohmann::json& j, PlayerClubMembership_t& v) {
    v.preferences = j.at("preferences").get<ClubPreferences_t>();
    v.activeClubs = j.at("activeClubs").get<std::vector<PlayerClub_t>>();
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsConfig_t>();
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>();
    v.pendingInvites = j.at("pendingInvites").get<std::vector<ClubInvite_t>>();
    v.info = j.at("info").get<ClubPlayer_t>();
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<Club_t>>();
    v.removedClubs = j.at("removedClubs").get<std::vector<Club_t>>();
  }
  inline std::string to_string(const PlayerClubMembership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
