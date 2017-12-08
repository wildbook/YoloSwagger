#pragma once
#include <json.hpp>
#include <optional>
#include "ClubDto.hpp"
#include "ClubReferenceDto.hpp"
#include "PlayerInfoDto.hpp"
#include "PlayerMembershipPreferencesDto.hpp"
#include "MembershipInviteDto.hpp"
#include "ClubsServerConfigDto.hpp"
namespace leagueapi {
  struct PlayerMembershipDto_t {
    std::string resourceUri;
    PlayerMembershipPreferencesDto_t playerClubPreferences;
    std::vector<ClubReferenceDto_t> revokedInviteClubs;
    std::vector<ClubReferenceDto_t> removedClubs;
    std::vector<MembershipInviteDto_t> pendingInvites;
    PlayerInfoDto_t player;
    std::string secureClubPresenceInfoString;
    ClubsServerConfigDto_t clubsServerConfig;
    std::vector<ClubDto_t> activeClubs;
  };

  inline void to_json(nlohmann::json& j, const PlayerMembershipDto_t& v) {
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

  inline void from_json(const nlohmann::json& j, PlayerMembershipDto_t& v) {
    v.resourceUri = j.at("resourceUri").get<std::string>();
    v.playerClubPreferences = j.at("playerClubPreferences").get<PlayerMembershipPreferencesDto_t>();
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<ClubReferenceDto_t>>();
    v.removedClubs = j.at("removedClubs").get<std::vector<ClubReferenceDto_t>>();
    v.pendingInvites = j.at("pendingInvites").get<std::vector<MembershipInviteDto_t>>();
    v.player = j.at("player").get<PlayerInfoDto_t>();
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>();
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsServerConfigDto_t>();
    v.activeClubs = j.at("activeClubs").get<std::vector<ClubDto_t>>();
  }
  inline std::string to_string(const PlayerMembershipDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
