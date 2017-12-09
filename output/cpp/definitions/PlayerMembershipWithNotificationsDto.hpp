#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerMembershipDto.hpp"
#include "MembershipNoficationsDto.hpp"
namespace leagueapi {
  struct PlayerMembershipWithNotificationsDto_t {
    std::vector<MembershipNoficationsDto_t> membershipNotifications;
    PlayerMembershipDto_t playerMembership;
  };

  inline void to_json(nlohmann::json& j, const PlayerMembershipWithNotificationsDto_t& v) {
    j["membershipNotifications"] = v.membershipNotifications;
    j["playerMembership"] = v.playerMembership;
  }

  inline void from_json(const nlohmann::json& j, PlayerMembershipWithNotificationsDto_t& v) {
    v.membershipNotifications = j.at("membershipNotifications").get<std::vector<MembershipNoficationsDto_t>>();
    v.playerMembership = j.at("playerMembership").get<PlayerMembershipDto_t>();
  }
  inline std::string to_string(const PlayerMembershipWithNotificationsDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
