#ifndef SWAGGER_TYPES_PlayerMembershipDto_HPP
#define SWAGGER_TYPES_PlayerMembershipDto_HPP
#include <json.hpp>
#include "ClubsServerConfigDto.hpp"
#include "ClubReferenceDto.hpp"
#include "PlayerMembershipPreferencesDto.hpp"
#include "ClubDto.hpp"
#include "MembershipInviteDto.hpp"
#include "PlayerInfoDto.hpp"
namespace leagueapi {
  // 
  struct PlayerMembershipDto {
    // 
    std::vector<ClubDto> activeClubs;
    // 
    ClubsServerConfigDto clubsServerConfig;
    // 
    std::vector<MembershipInviteDto> pendingInvites;
    // 
    PlayerInfoDto player;
    // 
    PlayerMembershipPreferencesDto playerClubPreferences;
    // 
    std::vector<ClubReferenceDto> removedClubs;
    // 
    std::string resourceUri;
    // 
    std::vector<ClubReferenceDto> revokedInviteClubs;
    // 
    std::string secureClubPresenceInfoString;
  };

  void to_json(nlohmann::json& j, const PlayerMembershipDto& v) {
    j["activeClubs"] = v.activeClubs;
    j["clubsServerConfig"] = v.clubsServerConfig;
    j["pendingInvites"] = v.pendingInvites;
    j["player"] = v.player;
    j["playerClubPreferences"] = v.playerClubPreferences;
    j["removedClubs"] = v.removedClubs;
    j["resourceUri"] = v.resourceUri;
    j["revokedInviteClubs"] = v.revokedInviteClubs;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
  }

  void from_json(const nlohmann::json& j, PlayerMembershipDto& v) {
    v.activeClubs = j.at("activeClubs").get<std::vector<ClubDto>>;
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsServerConfigDto>;
    v.pendingInvites = j.at("pendingInvites").get<std::vector<MembershipInviteDto>>;
    v.player = j.at("player").get<PlayerInfoDto>;
    v.playerClubPreferences = j.at("playerClubPreferences").get<PlayerMembershipPreferencesDto>;
    v.removedClubs = j.at("removedClubs").get<std::vector<ClubReferenceDto>>;
    v.resourceUri = j.at("resourceUri").get<std::string>;
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<ClubReferenceDto>>;
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PlayerMembershipDto_HPP
