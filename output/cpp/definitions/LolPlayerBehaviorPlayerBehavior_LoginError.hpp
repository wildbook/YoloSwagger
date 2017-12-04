#ifndef SWAGGER_TYPES_LolPlayerBehaviorPlayerBehavior_LoginError_HPP
#define SWAGGER_TYPES_LolPlayerBehaviorPlayerBehavior_LoginError_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPlayerBehaviorPlayerBehavior_LoginError {
    // 
    std::string messageId;
    // 
    std::string description;
    // 
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorPlayerBehavior_LoginError& v) {
    j["messageId"] = v.messageId;
    j["description"] = v.description;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorPlayerBehavior_LoginError& v) {
    v.messageId = j.at("messageId").get<std::string>;
    v.description = j.at("description").get<std::string>;
    v.id = j.at("id").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPlayerBehaviorPlayerBehavior_LoginError_HPP
