#pragma once
#include <json.hpp>
#include <optional>
#include "ClubPreferences.hpp"
#include "PlayerClub.hpp"
#include "ClubsConfig.hpp"
#include "Club.hpp"
#include "ClubPlayer.hpp"
#include "ClubInvite.hpp"
namespace leagueapi {
  struct PlayerClubMembership_t {
    ClubPlayer_t info;
    ClubPreferences_t preferences;
    std::string secureClubPresenceInfoString;
    std::vector<Club_t> removedClubs;
    std::vector<PlayerClub_t> activeClubs;
    std::vector<ClubInvite_t> pendingInvites;
    ClubsConfig_t clubsServerConfig;
    std::vector<Club_t> revokedInviteClubs;
  };

  inline void to_json(nlohmann::json& j, const PlayerClubMembership_t& v) {
    j["info"] = v.info;
    j["preferences"] = v.preferences;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
    j["removedClubs"] = v.removedClubs;
    j["activeClubs"] = v.activeClubs;
    j["pendingInvites"] = v.pendingInvites;
    j["clubsServerConfig"] = v.clubsServerConfig;
    j["revokedInviteClubs"] = v.revokedInviteClubs;
  }

  inline void from_json(const nlohmann::json& j, PlayerClubMembership_t& v) {
    v.info = j.at("info").get<ClubPlayer_t>();
    v.preferences = j.at("preferences").get<ClubPreferences_t>();
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>();
    v.removedClubs = j.at("removedClubs").get<std::vector<Club_t>>();
    v.activeClubs = j.at("activeClubs").get<std::vector<PlayerClub_t>>();
    v.pendingInvites = j.at("pendingInvites").get<std::vector<ClubInvite_t>>();
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsConfig_t>();
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<Club_t>>();
  }
  inline std::string to_string(const PlayerClubMembership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
