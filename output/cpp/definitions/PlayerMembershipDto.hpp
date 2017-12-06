#pragma once
#include <json.hpp>
#include <optional>
#include "ClubDto.hpp"
#include "MembershipInviteDto.hpp"
#include "PlayerInfoDto.hpp"
#include "ClubsServerConfigDto.hpp"
#include "PlayerMembershipPreferencesDto.hpp"
#include "ClubReferenceDto.hpp"
namespace leagueapi {
  struct PlayerMembershipDto_t {
    std::string resourceUri;
    std::vector<ClubReferenceDto_t> revokedInviteClubs;
    std::vector<ClubDto_t> activeClubs;
    PlayerMembershipPreferencesDto_t playerClubPreferences;
    std::vector<MembershipInviteDto_t> pendingInvites;
    std::vector<ClubReferenceDto_t> removedClubs;
    PlayerInfoDto_t player;
    std::string secureClubPresenceInfoString;
    ClubsServerConfigDto_t clubsServerConfig;
  };

  inline void to_json(nlohmann::json& j, const PlayerMembershipDto_t& v) {
    j["resourceUri"] = v.resourceUri;
    j["revokedInviteClubs"] = v.revokedInviteClubs;
    j["activeClubs"] = v.activeClubs;
    j["playerClubPreferences"] = v.playerClubPreferences;
    j["pendingInvites"] = v.pendingInvites;
    j["removedClubs"] = v.removedClubs;
    j["player"] = v.player;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
    j["clubsServerConfig"] = v.clubsServerConfig;
  }

  inline void from_json(const nlohmann::json& j, PlayerMembershipDto_t& v) {
    v.resourceUri = j.at("resourceUri").get<std::string>();
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<ClubReferenceDto_t>>();
    v.activeClubs = j.at("activeClubs").get<std::vector<ClubDto_t>>();
    v.playerClubPreferences = j.at("playerClubPreferences").get<PlayerMembershipPreferencesDto_t>();
    v.pendingInvites = j.at("pendingInvites").get<std::vector<MembershipInviteDto_t>>();
    v.removedClubs = j.at("removedClubs").get<std::vector<ClubReferenceDto_t>>();
    v.player = j.at("player").get<PlayerInfoDto_t>();
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>();
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsServerConfigDto_t>();
  }
}
