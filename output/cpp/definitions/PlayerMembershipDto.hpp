#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerInfoDto.hpp"
#include "ClubsServerConfigDto.hpp"
#include "ClubDto.hpp"
#include "ClubReferenceDto.hpp"
#include "MembershipInviteDto.hpp"
#include "PlayerMembershipPreferencesDto.hpp"
namespace leagueapi {
  struct PlayerMembershipDto_t {
    std::vector<ClubDto_t> activeClubs;
    ClubsServerConfigDto_t clubsServerConfig;
    std::vector<MembershipInviteDto_t> pendingInvites;
    PlayerInfoDto_t player;
    PlayerMembershipPreferencesDto_t playerClubPreferences;
    std::vector<ClubReferenceDto_t> removedClubs;
    std::string resourceUri;
    std::vector<ClubReferenceDto_t> revokedInviteClubs;
    std::string secureClubPresenceInfoString;
  };

  inline void to_json(nlohmann::json& j, const PlayerMembershipDto_t& v) {
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

  inline void from_json(const nlohmann::json& j, PlayerMembershipDto_t& v) {
    v.activeClubs = j.at("activeClubs").get<std::vector<ClubDto_t>>();
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsServerConfigDto_t>();
    v.pendingInvites = j.at("pendingInvites").get<std::vector<MembershipInviteDto_t>>();
    v.player = j.at("player").get<PlayerInfoDto_t>();
    v.playerClubPreferences = j.at("playerClubPreferences").get<PlayerMembershipPreferencesDto_t>();
    v.removedClubs = j.at("removedClubs").get<std::vector<ClubReferenceDto_t>>();
    v.resourceUri = j.at("resourceUri").get<std::string>();
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<ClubReferenceDto_t>>();
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>();
  }
}
