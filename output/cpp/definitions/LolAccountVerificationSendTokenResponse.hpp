#ifndef SWAGGER_TYPES_LolAccountVerificationSendTokenResponse_HPP
#define SWAGGER_TYPES_LolAccountVerificationSendTokenResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolAccountVerificationSendTokenResponse {
    // 
    int32_t status;
    // 
    std::string message;
    // 
    bool success;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationSendTokenResponse& v) {
    j["status"] = v.status;
    j["message"] = v.message;
    j["success"] = v.success;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationSendTokenResponse& v) {
    v.status = j.at("status").get<int32_t>;
    v.message = j.at("message").get<std::string>;
    v.success = j.at("success").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolAccountVerificationSendTokenResponse_HPP
