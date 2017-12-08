#pragma once
#include <json.hpp>
#include <optional>
#include "ClubReferenceDto.hpp"
#include "MembershipInviteDto.hpp"
#include "PlayerInfoDto.hpp"
#include "PlayerMembershipPreferencesDto.hpp"
#include "ClubsServerConfigDto.hpp"
#include "ClubDto.hpp"
namespace leagueapi {
  struct PlayerMembershipDto_t {
    PlayerMembershipPreferencesDto_t playerClubPreferences;
    std::vector<ClubReferenceDto_t> revokedInviteClubs;
    std::string resourceUri;
    std::string secureClubPresenceInfoString;
    std::vector<ClubReferenceDto_t> removedClubs;
    std::vector<ClubDto_t> activeClubs;
    std::vector<MembershipInviteDto_t> pendingInvites;
    ClubsServerConfigDto_t clubsServerConfig;
    PlayerInfoDto_t player;
  };

  inline void to_json(nlohmann::json& j, const PlayerMembershipDto_t& v) {
    j["playerClubPreferences"] = v.playerClubPreferences;
    j["revokedInviteClubs"] = v.revokedInviteClubs;
    j["resourceUri"] = v.resourceUri;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
    j["removedClubs"] = v.removedClubs;
    j["activeClubs"] = v.activeClubs;
    j["pendingInvites"] = v.pendingInvites;
    j["clubsServerConfig"] = v.clubsServerConfig;
    j["player"] = v.player;
  }

  inline void from_json(const nlohmann::json& j, PlayerMembershipDto_t& v) {
    v.playerClubPreferences = j.at("playerClubPreferences").get<PlayerMembershipPreferencesDto_t>();
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<ClubReferenceDto_t>>();
    v.resourceUri = j.at("resourceUri").get<std::string>();
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>();
    v.removedClubs = j.at("removedClubs").get<std::vector<ClubReferenceDto_t>>();
    v.activeClubs = j.at("activeClubs").get<std::vector<ClubDto_t>>();
    v.pendingInvites = j.at("pendingInvites").get<std::vector<MembershipInviteDto_t>>();
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsServerConfigDto_t>();
    v.player = j.at("player").get<PlayerInfoDto_t>();
  }
  inline std::string to_string(const PlayerMembershipDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
