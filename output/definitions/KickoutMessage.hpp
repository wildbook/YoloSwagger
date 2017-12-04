#ifndef SWAGGER_TYPES_KickoutMessage_HPP
#define SWAGGER_TYPES_KickoutMessage_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct KickoutMessage {
    // 
    std::string message;
  };

  inline void to_json(nlohmann::json& j, const KickoutMessage& v) {
    j["message"] = v.message;
  }

  inline void from_json(const nlohmann::json& j, KickoutMessage& v) {
    v.message = j.at("message").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_KickoutMessage_HPP
