#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerClub.hpp"
#include "ClubInvite.hpp"
#include "ClubPlayer.hpp"
#include "Club.hpp"
#include "ClubsConfig.hpp"
#include "ClubPreferences.hpp"
namespace leagueapi {
  struct PlayerClubMembership_t {
    std::vector<Club_t> revokedInviteClubs;
    ClubPreferences_t preferences;
    ClubsConfig_t clubsServerConfig;
    std::vector<ClubInvite_t> pendingInvites;
    std::vector<PlayerClub_t> activeClubs;
    std::vector<Club_t> removedClubs;
    ClubPlayer_t info;
    std::string secureClubPresenceInfoString;
  };

  inline void to_json(nlohmann::json& j, const PlayerClubMembership_t& v) {
    j["revokedInviteClubs"] = v.revokedInviteClubs;
    j["preferences"] = v.preferences;
    j["clubsServerConfig"] = v.clubsServerConfig;
    j["pendingInvites"] = v.pendingInvites;
    j["activeClubs"] = v.activeClubs;
    j["removedClubs"] = v.removedClubs;
    j["info"] = v.info;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
  }

  inline void from_json(const nlohmann::json& j, PlayerClubMembership_t& v) {
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<Club_t>>();
    v.preferences = j.at("preferences").get<ClubPreferences_t>();
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsConfig_t>();
    v.pendingInvites = j.at("pendingInvites").get<std::vector<ClubInvite_t>>();
    v.activeClubs = j.at("activeClubs").get<std::vector<PlayerClub_t>>();
    v.removedClubs = j.at("removedClubs").get<std::vector<Club_t>>();
    v.info = j.at("info").get<ClubPlayer_t>();
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>();
  }
}
