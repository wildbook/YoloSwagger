#ifndef SWAGGER_TYPES_ClubInviteStatus_HPP
#define SWAGGER_TYPES_ClubInviteStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class ClubInviteStatus {
    // 
    ACCEPTED = 1,
    // 
    REJECTED = 2,
    // 
    PENDING = 0,
    // 
    BLOCKED = 3,
  };

  inline void to_json(nlohmann::json& j, const ClubInviteStatus& v) {
    switch(v) {
      case ClubInviteStatus::ACCEPTED:
        j = "ACCEPTED";
      break;
      case ClubInviteStatus::REJECTED:
        j = "REJECTED";
      break;
      case ClubInviteStatus::PENDING:
        j = "PENDING";
      break;
      case ClubInviteStatus::BLOCKED:
        j = "BLOCKED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ClubInviteStatus& v) {
    const auto& s = j.get<std::string>();
    if(s == "ACCEPTED"){
      v = ClubInviteStatus::ACCEPTED;
      return;
    }
    if(s == "REJECTED"){
      v = ClubInviteStatus::REJECTED;
      return;
    }
    if(s == "PENDING"){
      v = ClubInviteStatus::PENDING;
      return;
    }
    if(s == "BLOCKED"){
      v = ClubInviteStatus::BLOCKED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_ClubInviteStatus_HPP