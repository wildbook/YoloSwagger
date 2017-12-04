#ifndef SWAGGER_TYPES_LolAccountVerificationVerifyResponse_HPP
#define SWAGGER_TYPES_LolAccountVerificationVerifyResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolAccountVerificationVerifyResponse {
    // 
    int32_t status;
    // 
    std::string message;
    // 
    bool success;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationVerifyResponse& v) {
    j["status"] = v.status;
    j["message"] = v.message;
    j["success"] = v.success;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationVerifyResponse& v) {
    v.status = j.at("status").get<int32_t>;
    v.message = j.at("message").get<std::string>;
    v.success = j.at("success").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolAccountVerificationVerifyResponse_HPP
