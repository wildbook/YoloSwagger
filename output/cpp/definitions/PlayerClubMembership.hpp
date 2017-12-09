#pragma once
#include <json.hpp>
#include <optional>
#include "ClubInvite.hpp"
#include "PlayerClub.hpp"
#include "ClubPlayer.hpp"
#include "ClubsConfig.hpp"
#include "ClubPreferences.hpp"
#include "Club.hpp"
namespace leagueapi {
  struct PlayerClubMembership_t {
    std::string secureClubPresenceInfoString;
    std::vector<Club_t> revokedInviteClubs;
    std::vector<ClubInvite_t> pendingInvites;
    std::vector<Club_t> removedClubs;
    ClubsConfig_t clubsServerConfig;
    ClubPlayer_t info;
    ClubPreferences_t preferences;
    std::vector<PlayerClub_t> activeClubs;
  };

  inline void to_json(nlohmann::json& j, const PlayerClubMembership_t& v) {
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
    j["revokedInviteClubs"] = v.revokedInviteClubs;
    j["pendingInvites"] = v.pendingInvites;
    j["removedClubs"] = v.removedClubs;
    j["clubsServerConfig"] = v.clubsServerConfig;
    j["info"] = v.info;
    j["preferences"] = v.preferences;
    j["activeClubs"] = v.activeClubs;
  }

  inline void from_json(const nlohmann::json& j, PlayerClubMembership_t& v) {
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>();
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<Club_t>>();
    v.pendingInvites = j.at("pendingInvites").get<std::vector<ClubInvite_t>>();
    v.removedClubs = j.at("removedClubs").get<std::vector<Club_t>>();
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsConfig_t>();
    v.info = j.at("info").get<ClubPlayer_t>();
    v.preferences = j.at("preferences").get<ClubPreferences_t>();
    v.activeClubs = j.at("activeClubs").get<std::vector<PlayerClub_t>>();
  }
  inline std::string to_string(const PlayerClubMembership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
