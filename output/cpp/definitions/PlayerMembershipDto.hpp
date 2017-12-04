#ifndef SWAGGER_TYPES_PlayerMembershipDto_HPP
#define SWAGGER_TYPES_PlayerMembershipDto_HPP
#include <json.hpp>
#include "ClubDto.hpp"
#include "ClubReferenceDto.hpp"
#include "PlayerInfoDto.hpp"
#include "PlayerMembershipPreferencesDto.hpp"
#include "MembershipInviteDto.hpp"
#include "ClubsServerConfigDto.hpp"
namespace leagueapi {
  // 
  struct PlayerMembershipDto {
    // 
    std::string resourceUri;
    // 
    PlayerMembershipPreferencesDto playerClubPreferences;
    // 
    std::vector<ClubReferenceDto> revokedInviteClubs;
    // 
    std::vector<ClubReferenceDto> removedClubs;
    // 
    std::vector<MembershipInviteDto> pendingInvites;
    // 
    PlayerInfoDto player;
    // 
    std::string secureClubPresenceInfoString;
    // 
    ClubsServerConfigDto clubsServerConfig;
    // 
    std::vector<ClubDto> activeClubs;
  };

  inline void to_json(nlohmann::json& j, const PlayerMembershipDto& v) {
    j["resourceUri"] = v.resourceUri;
    j["playerClubPreferences"] = v.playerClubPreferences;
    j["revokedInviteClubs"] = v.revokedInviteClubs;
    j["removedClubs"] = v.removedClubs;
    j["pendingInvites"] = v.pendingInvites;
    j["player"] = v.player;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
    j["clubsServerConfig"] = v.clubsServerConfig;
    j["activeClubs"] = v.activeClubs;
  }

  inline void from_json(const nlohmann::json& j, PlayerMembershipDto& v) {
    v.resourceUri = j.at("resourceUri").get<std::string>;
    v.playerClubPreferences = j.at("playerClubPreferences").get<PlayerMembershipPreferencesDto>;
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<ClubReferenceDto>>;
    v.removedClubs = j.at("removedClubs").get<std::vector<ClubReferenceDto>>;
    v.pendingInvites = j.at("pendingInvites").get<std::vector<MembershipInviteDto>>;
    v.player = j.at("player").get<PlayerInfoDto>;
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>;
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsServerConfigDto>;
    v.activeClubs = j.at("activeClubs").get<std::vector<ClubDto>>;
  }

}
#endif // SWAGGER_TYPES_PlayerMembershipDto_HPP
