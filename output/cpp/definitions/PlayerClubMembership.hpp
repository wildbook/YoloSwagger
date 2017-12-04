#ifndef SWAGGER_TYPES_PlayerClubMembership_HPP
#define SWAGGER_TYPES_PlayerClubMembership_HPP
#include <json.hpp>
#include "ClubInvite.hpp"
#include "ClubsConfig.hpp"
#include "Club.hpp"
#include "ClubPlayer.hpp"
#include "PlayerClub.hpp"
#include "ClubPreferences.hpp"
namespace leagueapi {
  // 
  struct PlayerClubMembership {
    // 
    ClubPlayer info;
    // 
    ClubPreferences preferences;
    // 
    std::vector<Club> revokedInviteClubs;
    // 
    std::vector<Club> removedClubs;
    // 
    std::vector<ClubInvite> pendingInvites;
    // 
    std::string secureClubPresenceInfoString;
    // 
    ClubsConfig clubsServerConfig;
    // 
    std::vector<PlayerClub> activeClubs;
  };

  inline void to_json(nlohmann::json& j, const PlayerClubMembership& v) {
    j["info"] = v.info;
    j["preferences"] = v.preferences;
    j["revokedInviteClubs"] = v.revokedInviteClubs;
    j["removedClubs"] = v.removedClubs;
    j["pendingInvites"] = v.pendingInvites;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
    j["clubsServerConfig"] = v.clubsServerConfig;
    j["activeClubs"] = v.activeClubs;
  }

  inline void from_json(const nlohmann::json& j, PlayerClubMembership& v) {
    v.info = j.at("info").get<ClubPlayer>;
    v.preferences = j.at("preferences").get<ClubPreferences>;
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<Club>>;
    v.removedClubs = j.at("removedClubs").get<std::vector<Club>>;
    v.pendingInvites = j.at("pendingInvites").get<std::vector<ClubInvite>>;
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>;
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsConfig>;
    v.activeClubs = j.at("activeClubs").get<std::vector<PlayerClub>>;
  }

}
#endif // SWAGGER_TYPES_PlayerClubMembership_HPP
