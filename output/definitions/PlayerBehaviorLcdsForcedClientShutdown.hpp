#ifndef SWAGGER_TYPES_PlayerBehaviorLcdsForcedClientShutdown_HPP
#define SWAGGER_TYPES_PlayerBehaviorLcdsForcedClientShutdown_HPP
#include <json.hpp>
namespace test {
  // 
  struct PlayerBehaviorLcdsForcedClientShutdown {
'    // 
    std::string additionalInfo;
    // 
    std::string reason;
  };

  void to_json(nlohmann::json& j, const PlayerBehaviorLcdsForcedClientShutdown& v) {
    j["additionalInfo"] = v.additionalInfo;
    j["reason"] = v.reason;
  }

  void from_json(const nlohmann::json& j, PlayerBehaviorLcdsForcedClientShutdown& v) {
    v.additionalInfo = j.at("additionalInfo").get<std::string>;
    v.reason = j.at("reason").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PlayerBehaviorLcdsForcedClientShutdown_HPP
