#ifndef SWAGGER_TYPES_SubState_HPP
#define SWAGGER_TYPES_SubState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class SubState {
    // 
    DECLINED = 2,
    // 
    FORCED_NOT_READY = 5,
    // 
    NOT_READY = 4,
    // 
    PENDING = 1,
    // 
    READY = 6,
    // 
    REVOKED = 3,
    // 
    SUGGESTED = 0,
  };

  inline void to_json(nlohmann::json& j, const SubState& v) {
    switch(v) {
      case SubState::DECLINED:
        j = "DECLINED";
      break;
      case SubState::FORCED_NOT_READY:
        j = "FORCED_NOT_READY";
      break;
      case SubState::NOT_READY:
        j = "NOT_READY";
      break;
      case SubState::PENDING:
        j = "PENDING";
      break;
      case SubState::READY:
        j = "READY";
      break;
      case SubState::REVOKED:
        j = "REVOKED";
      break;
      case SubState::SUGGESTED:
        j = "SUGGESTED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, SubState& v) {
    const auto& s = j.get<std::string>();
    if(s == "DECLINED"){
      v = SubState::DECLINED;
      return;
    }
    if(s == "FORCED_NOT_READY"){
      v = SubState::FORCED_NOT_READY;
      return;
    }
    if(s == "NOT_READY"){
      v = SubState::NOT_READY;
      return;
    }
    if(s == "PENDING"){
      v = SubState::PENDING;
      return;
    }
    if(s == "READY"){
      v = SubState::READY;
      return;
    }
    if(s == "REVOKED"){
      v = SubState::REVOKED;
      return;
    }
    if(s == "SUGGESTED"){
      v = SubState::SUGGESTED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_SubState_HPP
