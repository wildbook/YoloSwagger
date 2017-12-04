#ifndef SWAGGER_TYPES_LolLoginLoginError_HPP
#define SWAGGER_TYPES_LolLoginLoginError_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLoginLoginError {
    // 
    std::string description;
    // 
    std::string id;
    // 
    std::string messageId;
  };

  void to_json(nlohmann::json& j, const LolLoginLoginError& v) {
    j["description"] = v.description;
    j["id"] = v.id;
    j["messageId"] = v.messageId;
  }

  void from_json(const nlohmann::json& j, LolLoginLoginError& v) {
    v.description = j.at("description").get<std::string>;
    v.id = j.at("id").get<std::string>;
    v.messageId = j.at("messageId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLoginLoginError_HPP
