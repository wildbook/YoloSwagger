#pragma once
#include <json.hpp>
#include <optional>
#include "ClubInvite.hpp"
#include "ClubsConfig.hpp"
#include "Club.hpp"
#include "ClubPlayer.hpp"
#include "PlayerClub.hpp"
#include "ClubPreferences.hpp"
namespace leagueapi {
  struct PlayerClubMembership_t {
    ClubPlayer_t info;
    ClubPreferences_t preferences;
    std::vector<Club_t> revokedInviteClubs;
    std::vector<Club_t> removedClubs;
    std::vector<ClubInvite_t> pendingInvites;
    std::string secureClubPresenceInfoString;
    ClubsConfig_t clubsServerConfig;
    std::vector<PlayerClub_t> activeClubs;
  };

  inline void to_json(nlohmann::json& j, const PlayerClubMembership_t& v) {
    j["info"] = v.info;
    j["preferences"] = v.preferences;
    j["revokedInviteClubs"] = v.revokedInviteClubs;
    j["removedClubs"] = v.removedClubs;
    j["pendingInvites"] = v.pendingInvites;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
    j["clubsServerConfig"] = v.clubsServerConfig;
    j["activeClubs"] = v.activeClubs;
  }

  inline void from_json(const nlohmann::json& j, PlayerClubMembership_t& v) {
    v.info = j.at("info").get<ClubPlayer_t>();
    v.preferences = j.at("preferences").get<ClubPreferences_t>();
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<Club_t>>();
    v.removedClubs = j.at("removedClubs").get<std::vector<Club_t>>();
    v.pendingInvites = j.at("pendingInvites").get<std::vector<ClubInvite_t>>();
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>();
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsConfig_t>();
    v.activeClubs = j.at("activeClubs").get<std::vector<PlayerClub_t>>();
  }
  inline std::string to_string(const PlayerClubMembership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
