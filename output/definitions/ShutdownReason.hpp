#ifndef SWAGGER_TYPES_ShutdownReason_HPP
#define SWAGGER_TYPES_ShutdownReason_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class ShutdownReason {
    // 
    Invalid = 0,
    // 
    LcuAlphaDisabled = 2,
    // 
    PlatformMaintenance = 1,
    // 
    PlayerBanned = 3,
  };

  void to_json(nlohmann::json& j, const ShutdownReason& v) {
    switch(v) {
      case ShutdownReason::Invalid:
        j = "Invalid";
      break;
      case ShutdownReason::LcuAlphaDisabled:
        j = "LcuAlphaDisabled";
      break;
      case ShutdownReason::PlatformMaintenance:
        j = "PlatformMaintenance";
      break;
      case ShutdownReason::PlayerBanned:
        j = "PlayerBanned";
      break;
    }
  }

  void from_json(const nlohmann::json& j, ShutdownReason& v) {
    const auto s& = j.get<std::string>();
    if(s == "Invalid"){
      v = ShutdownReason::Invalid;
      return;
    }
    if(s == "LcuAlphaDisabled"){
      v = ShutdownReason::LcuAlphaDisabled;
      return;
    }
    if(s == "PlatformMaintenance"){
      v = ShutdownReason::PlatformMaintenance;
      return;
    }
    if(s == "PlayerBanned"){
      v = ShutdownReason::PlayerBanned;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_ShutdownReason_HPP
