#ifndef SWAGGER_TYPES_MatchmakingLcdsGameNotification_HPP
#define SWAGGER_TYPES_MatchmakingLcdsGameNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MatchmakingLcdsGameNotification {
    // 
    std::string messageCode;
    // 
    std::string messageArgument;
    // 
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsGameNotification& v) {
    j["messageCode"] = v.messageCode;
    j["messageArgument"] = v.messageArgument;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsGameNotification& v) {
    v.messageCode = j.at("messageCode").get<std::string>;
    v.messageArgument = j.at("messageArgument").get<std::string>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingLcdsGameNotification_HPP