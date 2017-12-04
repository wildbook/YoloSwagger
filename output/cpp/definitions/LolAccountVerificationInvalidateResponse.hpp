#ifndef SWAGGER_TYPES_LolAccountVerificationInvalidateResponse_HPP
#define SWAGGER_TYPES_LolAccountVerificationInvalidateResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolAccountVerificationInvalidateResponse {
    // 
    int32_t status;
    // 
    std::string message;
    // 
    bool success;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationInvalidateResponse& v) {
    j["status"] = v.status;
    j["message"] = v.message;
    j["success"] = v.success;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationInvalidateResponse& v) {
    v.status = j.at("status").get<int32_t>;
    v.message = j.at("message").get<std::string>;
    v.success = j.at("success").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolAccountVerificationInvalidateResponse_HPP
