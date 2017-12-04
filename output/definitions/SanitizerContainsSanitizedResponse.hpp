#ifndef SWAGGER_TYPES_SanitizerContainsSanitizedResponse_HPP
#define SWAGGER_TYPES_SanitizerContainsSanitizedResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct SanitizerContainsSanitizedResponse {
    // 
    bool contains;
  };

  void to_json(nlohmann::json& j, const SanitizerContainsSanitizedResponse& v) {
    j["contains"] = v.contains;
  }

  void from_json(const nlohmann::json& j, SanitizerContainsSanitizedResponse& v) {
    v.contains = j.at("contains").get<bool>;
  }

}
#endif // SWAGGER_TYPES_SanitizerContainsSanitizedResponse_HPP
