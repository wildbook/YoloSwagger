#ifndef SWAGGER_TYPES_PlayerClubMembership_HPP
#define SWAGGER_TYPES_PlayerClubMembership_HPP
#include <json.hpp>
#include "ClubInvite.hpp"
#include "PlayerClub.hpp"
#include "ClubPreferences.hpp"
#include "ClubsConfig.hpp"
#include "ClubPlayer.hpp"
#include "Club.hpp"
namespace leagueapi {
  // 
  struct PlayerClubMembership {
    // 
    std::vector<PlayerClub> activeClubs;
    // 
    ClubsConfig clubsServerConfig;
    // 
    ClubPlayer info;
    // 
    std::vector<ClubInvite> pendingInvites;
    // 
    ClubPreferences preferences;
    // 
    std::vector<Club> removedClubs;
    // 
    std::vector<Club> revokedInviteClubs;
    // 
    std::string secureClubPresenceInfoString;
  };

  inline void to_json(nlohmann::json& j, const PlayerClubMembership& v) {
    j["activeClubs"] = v.activeClubs;
    j["clubsServerConfig"] = v.clubsServerConfig;
    j["info"] = v.info;
    j["pendingInvites"] = v.pendingInvites;
    j["preferences"] = v.preferences;
    j["removedClubs"] = v.removedClubs;
    j["revokedInviteClubs"] = v.revokedInviteClubs;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
  }

  inline void from_json(const nlohmann::json& j, PlayerClubMembership& v) {
    v.activeClubs = j.at("activeClubs").get<std::vector<PlayerClub>>;
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsConfig>;
    v.info = j.at("info").get<ClubPlayer>;
    v.pendingInvites = j.at("pendingInvites").get<std::vector<ClubInvite>>;
    v.preferences = j.at("preferences").get<ClubPreferences>;
    v.removedClubs = j.at("removedClubs").get<std::vector<Club>>;
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<Club>>;
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PlayerClubMembership_HPP
