#ifndef SWAGGER_TYPES_LolLoginLoginError_HPP
#define SWAGGER_TYPES_LolLoginLoginError_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLoginLoginError {
    // 
    std::string messageId;
    // 
    std::string description;
    // 
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginError& v) {
    j["messageId"] = v.messageId;
    j["description"] = v.description;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginError& v) {
    v.messageId = j.at("messageId").get<std::string>;
    v.description = j.at("description").get<std::string>;
    v.id = j.at("id").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLoginLoginError_HPP
