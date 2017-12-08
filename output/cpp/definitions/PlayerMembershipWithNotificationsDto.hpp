#pragma once
#include <json.hpp>
#include <optional>
#include "MembershipNoficationsDto.hpp"
#include "PlayerMembershipDto.hpp"
namespace leagueapi {
  struct PlayerMembershipWithNotificationsDto_t {
    PlayerMembershipDto_t playerMembership;
    std::vector<MembershipNoficationsDto_t> membershipNotifications;
  };

  inline void to_json(nlohmann::json& j, const PlayerMembershipWithNotificationsDto_t& v) {
    j["playerMembership"] = v.playerMembership;
    j["membershipNotifications"] = v.membershipNotifications;
  }

  inline void from_json(const nlohmann::json& j, PlayerMembershipWithNotificationsDto_t& v) {
    v.playerMembership = j.at("playerMembership").get<PlayerMembershipDto_t>();
    v.membershipNotifications = j.at("membershipNotifications").get<std::vector<MembershipNoficationsDto_t>>();
  }
  inline std::string to_string(const PlayerMembershipWithNotificationsDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
