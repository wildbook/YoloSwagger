#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerClub.hpp"
#include "ClubsConfig.hpp"
#include "ClubPreferences.hpp"
#include "ClubPlayer.hpp"
#include "Club.hpp"
#include "ClubInvite.hpp"
namespace leagueapi {
  struct PlayerClubMembership_t {
    std::vector<PlayerClub_t> activeClubs;
    ClubsConfig_t clubsServerConfig;
    ClubPlayer_t info;
    std::vector<ClubInvite_t> pendingInvites;
    ClubPreferences_t preferences;
    std::vector<Club_t> removedClubs;
    std::vector<Club_t> revokedInviteClubs;
    std::string secureClubPresenceInfoString;
  };

  inline void to_json(nlohmann::json& j, const PlayerClubMembership_t& v) {
    j["activeClubs"] = v.activeClubs;
    j["clubsServerConfig"] = v.clubsServerConfig;
    j["info"] = v.info;
    j["pendingInvites"] = v.pendingInvites;
    j["preferences"] = v.preferences;
    j["removedClubs"] = v.removedClubs;
    j["revokedInviteClubs"] = v.revokedInviteClubs;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
  }

  inline void from_json(const nlohmann::json& j, PlayerClubMembership_t& v) {
    v.activeClubs = j.at("activeClubs").get<std::vector<PlayerClub_t>>();
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsConfig_t>();
    v.info = j.at("info").get<ClubPlayer_t>();
    v.pendingInvites = j.at("pendingInvites").get<std::vector<ClubInvite_t>>();
    v.preferences = j.at("preferences").get<ClubPreferences_t>();
    v.removedClubs = j.at("removedClubs").get<std::vector<Club_t>>();
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<Club_t>>();
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>();
  }
}
