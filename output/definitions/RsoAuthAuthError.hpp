#ifndef SWAGGER_TYPES_RsoAuthAuthError_HPP
#define SWAGGER_TYPES_RsoAuthAuthError_HPP
#include <json.hpp>
namespace test {
  // 
  struct RsoAuthAuthError {
'    // 
    std::string error;
    // 
    std::string errorDescription;
  };

  void to_json(nlohmann::json& j, const RsoAuthAuthError& v) {
    j["error"] = v.error;
    j["errorDescription"] = v.errorDescription;
  }

  void from_json(const nlohmann::json& j, RsoAuthAuthError& v) {
    v.error = j.at("error").get<std::string>;
    v.errorDescription = j.at("errorDescription").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthAuthError_HPP
