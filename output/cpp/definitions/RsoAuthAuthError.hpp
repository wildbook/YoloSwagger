#ifndef SWAGGER_TYPES_RsoAuthAuthError_HPP
#define SWAGGER_TYPES_RsoAuthAuthError_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RsoAuthAuthError {
    // 
    std::string errorDescription;
    // 
    std::string error;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthAuthError& v) {
    j["errorDescription"] = v.errorDescription;
    j["error"] = v.error;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthAuthError& v) {
    v.errorDescription = j.at("errorDescription").get<std::string>;
    v.error = j.at("error").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthAuthError_HPP
