#pragma once
#include <json.hpp>
#include <optional>
#include "ClubInvite.hpp"
#include "ClubPlayer.hpp"
#include "Club.hpp"
#include "ClubPreferences.hpp"
#include "PlayerClub.hpp"
#include "ClubsConfig.hpp"
namespace leagueapi {
  struct PlayerClubMembership_t {
    std::vector<PlayerClub_t> activeClubs;
    std::vector<Club_t> revokedInviteClubs;
    ClubPlayer_t info;
    std::vector<Club_t> removedClubs;
    std::vector<ClubInvite_t> pendingInvites;
    ClubsConfig_t clubsServerConfig;
    std::string secureClubPresenceInfoString;
    ClubPreferences_t preferences;
  };

  inline void to_json(nlohmann::json& j, const PlayerClubMembership_t& v) {
    j["activeClubs"] = v.activeClubs;
    j["revokedInviteClubs"] = v.revokedInviteClubs;
    j["info"] = v.info;
    j["removedClubs"] = v.removedClubs;
    j["pendingInvites"] = v.pendingInvites;
    j["clubsServerConfig"] = v.clubsServerConfig;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
    j["preferences"] = v.preferences;
  }

  inline void from_json(const nlohmann::json& j, PlayerClubMembership_t& v) {
    v.activeClubs = j.at("activeClubs").get<std::vector<PlayerClub_t>>();
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<Club_t>>();
    v.info = j.at("info").get<ClubPlayer_t>();
    v.removedClubs = j.at("removedClubs").get<std::vector<Club_t>>();
    v.pendingInvites = j.at("pendingInvites").get<std::vector<ClubInvite_t>>();
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsConfig_t>();
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>();
    v.preferences = j.at("preferences").get<ClubPreferences_t>();
  }
  inline std::string to_string(const PlayerClubMembership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
