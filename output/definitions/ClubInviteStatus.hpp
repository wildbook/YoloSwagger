#ifndef SWAGGER_TYPES_ClubInviteStatus_HPP
#define SWAGGER_TYPES_ClubInviteStatus_HPP
#include <json.hpp>
namespace test {
  // 
  enum class ClubInviteStatus {
'    // 
    ACCEPTED = 1,
    // 
    BLOCKED = 3,
    // 
    PENDING = 0,
    // 
    REJECTED = 2,
  };

  void to_json(nlohmann::json& j, const ClubInviteStatus& v) {
    switch(v) {
      case ClubInviteStatus::ACCEPTED:
        j = "ACCEPTED";
      break;
      case ClubInviteStatus::BLOCKED:
        j = "BLOCKED";
      break;
      case ClubInviteStatus::PENDING:
        j = "PENDING";
      break;
      case ClubInviteStatus::REJECTED:
        j = "REJECTED";
      break;
    }
  }

  void from_json(const nlohmann::json& j, ClubInviteStatus& v) {
    const auto s& = j.get<std::string>();
    if(s == "ACCEPTED"){
      v = ClubInviteStatus::ACCEPTED;
      return;
    }
    if(s == "BLOCKED"){
      v = ClubInviteStatus::BLOCKED;
      return;
    }
    if(s == "PENDING"){
      v = ClubInviteStatus::PENDING;
      return;
    }
    if(s == "REJECTED"){
      v = ClubInviteStatus::REJECTED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_ClubInviteStatus_HPP
