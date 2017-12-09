#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerInfoDto.hpp"
#include "ClubsServerConfigDto.hpp"
#include "ClubDto.hpp"
#include "PlayerMembershipPreferencesDto.hpp"
#include "MembershipInviteDto.hpp"
#include "ClubReferenceDto.hpp"
namespace leagueapi {
  struct PlayerMembershipDto_t {
    PlayerMembershipPreferencesDto_t playerClubPreferences;
    std::string resourceUri;
    std::vector<MembershipInviteDto_t> pendingInvites;
    std::vector<ClubReferenceDto_t> removedClubs;
    PlayerInfoDto_t player;
    ClubsServerConfigDto_t clubsServerConfig;
    std::string secureClubPresenceInfoString;
    std::vector<ClubReferenceDto_t> revokedInviteClubs;
    std::vector<ClubDto_t> activeClubs;
  };

  inline void to_json(nlohmann::json& j, const PlayerMembershipDto_t& v) {
    j["playerClubPreferences"] = v.playerClubPreferences;
    j["resourceUri"] = v.resourceUri;
    j["pendingInvites"] = v.pendingInvites;
    j["removedClubs"] = v.removedClubs;
    j["player"] = v.player;
    j["clubsServerConfig"] = v.clubsServerConfig;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
    j["revokedInviteClubs"] = v.revokedInviteClubs;
    j["activeClubs"] = v.activeClubs;
  }

  inline void from_json(const nlohmann::json& j, PlayerMembershipDto_t& v) {
    v.playerClubPreferences = j.at("playerClubPreferences").get<PlayerMembershipPreferencesDto_t>();
    v.resourceUri = j.at("resourceUri").get<std::string>();
    v.pendingInvites = j.at("pendingInvites").get<std::vector<MembershipInviteDto_t>>();
    v.removedClubs = j.at("removedClubs").get<std::vector<ClubReferenceDto_t>>();
    v.player = j.at("player").get<PlayerInfoDto_t>();
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsServerConfigDto_t>();
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>();
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<ClubReferenceDto_t>>();
    v.activeClubs = j.at("activeClubs").get<std::vector<ClubDto_t>>();
  }
  inline std::string to_string(const PlayerMembershipDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
