#pragma once
#include <json.hpp>
#include <optional>
#include "MembershipInviteDto.hpp"
#include "ClubReferenceDto.hpp"
#include "ClubDto.hpp"
#include "PlayerMembershipPreferencesDto.hpp"
#include "PlayerInfoDto.hpp"
#include "ClubsServerConfigDto.hpp"
namespace leagueapi {
  struct PlayerMembershipDto_t {
    std::vector<ClubDto_t> activeClubs;
    std::vector<ClubReferenceDto_t> revokedInviteClubs;
    std::vector<ClubReferenceDto_t> removedClubs;
    PlayerMembershipPreferencesDto_t playerClubPreferences;
    std::string secureClubPresenceInfoString;
    PlayerInfoDto_t player;
    std::vector<MembershipInviteDto_t> pendingInvites;
    std::string resourceUri;
    ClubsServerConfigDto_t clubsServerConfig;
  };

  inline void to_json(nlohmann::json& j, const PlayerMembershipDto_t& v) {
    j["activeClubs"] = v.activeClubs;
    j["revokedInviteClubs"] = v.revokedInviteClubs;
    j["removedClubs"] = v.removedClubs;
    j["playerClubPreferences"] = v.playerClubPreferences;
    j["secureClubPresenceInfoString"] = v.secureClubPresenceInfoString;
    j["player"] = v.player;
    j["pendingInvites"] = v.pendingInvites;
    j["resourceUri"] = v.resourceUri;
    j["clubsServerConfig"] = v.clubsServerConfig;
  }

  inline void from_json(const nlohmann::json& j, PlayerMembershipDto_t& v) {
    v.activeClubs = j.at("activeClubs").get<std::vector<ClubDto_t>>();
    v.revokedInviteClubs = j.at("revokedInviteClubs").get<std::vector<ClubReferenceDto_t>>();
    v.removedClubs = j.at("removedClubs").get<std::vector<ClubReferenceDto_t>>();
    v.playerClubPreferences = j.at("playerClubPreferences").get<PlayerMembershipPreferencesDto_t>();
    v.secureClubPresenceInfoString = j.at("secureClubPresenceInfoString").get<std::string>();
    v.player = j.at("player").get<PlayerInfoDto_t>();
    v.pendingInvites = j.at("pendingInvites").get<std::vector<MembershipInviteDto_t>>();
    v.resourceUri = j.at("resourceUri").get<std::string>();
    v.clubsServerConfig = j.at("clubsServerConfig").get<ClubsServerConfigDto_t>();
  }
  inline std::string to_string(const PlayerMembershipDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
