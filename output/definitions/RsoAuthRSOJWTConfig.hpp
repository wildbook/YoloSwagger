#ifndef SWAGGER_TYPES_RsoAuthRSOJWTConfig_HPP
#define SWAGGER_TYPES_RsoAuthRSOJWTConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RsoAuthRSOJWTConfig {
    // 
    std::string token;
  };

  void to_json(nlohmann::json& j, const RsoAuthRSOJWTConfig& v) {
    j["token"] = v.token;
  }

  void from_json(const nlohmann::json& j, RsoAuthRSOJWTConfig& v) {
    v.token = j.at("token").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthRSOJWTConfig_HPP
