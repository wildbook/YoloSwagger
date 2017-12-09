#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerMembershipPreferencesDto.hpp"
#include "MembershipInviteDto.hpp"
#include "ClubDto.hpp"
#include "ClubReferenceDto.hpp"
#include "PlayerInfoDto.hpp"
#include "ClubsServerConfigDto.hpp"
namespace leagueapi {
  struct PlayerMembershipDto_t {
    std::string secureClubPresenceInfoString;
    std::vector<ClubDto_t> activeClubs;
    PlayerMembershipPreferencesDto_t playerClubPreferences;
    ClubsServerConfigDto_t clubsServerConfig;
    std::vector<MembershipInviteDto_t> pendingInvites;
    std::vector<ClubReferenceDto_t> removedClubs;
    std::vector<ClubReferenceDto_t> revokedInviteClubs;
    PlayerInfoDto_t player;
    std::string resourceUri;
  };

  inline void to_json(nlohmann::json& j, const PlayerMembershipDto_t& v) {
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
    j["activeClubs"] = v.activeClubs;
    j["playerClubPreferences"] = v.playerClubPreferences;
    j["clubsServerConfig"] = v.clubsServerConfig;
    j["pendingInvites"] = v.pendingInvites;
    j["removedClubs"] = v.removedClubs;
    j["revokedInviteClubs"] = v.revokedInviteClubs;
    j["player"] = v.player;
    j["resourceUri"] = v.resourceUri;
  }

  inline void from_json(const nlohmann::json& j, PlayerMembershipDto_t& v) {
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>();
    v.activeClubs = j.at("activeClubs").get<std::vector<ClubDto_t>>();
    v.playerClubPreferences = j.at("playerClubPreferences").get<PlayerMembershipPreferencesDto_t>();
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsServerConfigDto_t>();
    v.pendingInvites = j.at("pendingInvites").get<std::vector<MembershipInviteDto_t>>();
    v.removedClubs = j.at("removedClubs").get<std::vector<ClubReferenceDto_t>>();
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<ClubReferenceDto_t>>();
    v.player = j.at("player").get<PlayerInfoDto_t>();
    v.resourceUri = j.at("resourceUri").get<std::string>();
  }
  inline std::string to_string(const PlayerMembershipDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
