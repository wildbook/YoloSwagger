#ifndef SWAGGER_TYPES_PlayerMembershipWithNotificationsDto_HPP
#define SWAGGER_TYPES_PlayerMembershipWithNotificationsDto_HPP
#include <json.hpp>
#include "MembershipNoficationsDto.hpp"
#include "PlayerMembershipDto.hpp"
namespace test {
  // 
  struct PlayerMembershipWithNotificationsDto {
'    // 
    std::vector<MembershipNoficationsDto> membershipNotifications;
    // 
    PlayerMembershipDto playerMembership;
  };

  void to_json(nlohmann::json& j, const PlayerMembershipWithNotificationsDto& v) {
    j["membershipNotifications"] = v.membershipNotifications;
    j["playerMembership"] = v.playerMembership;
  }

  void from_json(const nlohmann::json& j, PlayerMembershipWithNotificationsDto& v) {
    v.membershipNotifications = j.at("membershipNotifications").get<std::vector<MembershipNoficationsDto>>;
    v.playerMembership = j.at("playerMembership").get<PlayerMembershipDto>;
  }

}
#endif // SWAGGER_TYPES_PlayerMembershipWithNotificationsDto_HPP
