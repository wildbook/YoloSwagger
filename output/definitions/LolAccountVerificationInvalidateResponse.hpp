#ifndef SWAGGER_TYPES_LolAccountVerificationInvalidateResponse_HPP
#define SWAGGER_TYPES_LolAccountVerificationInvalidateResponse_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolAccountVerificationInvalidateResponse {
'    // 
    std::string message;
    // 
    int32_t status;
    // 
    bool success;
  };

  void to_json(nlohmann::json& j, const LolAccountVerificationInvalidateResponse& v) {
    j["message"] = v.message;
    j["status"] = v.status;
    j["success"] = v.success;
  }

  void from_json(const nlohmann::json& j, LolAccountVerificationInvalidateResponse& v) {
    v.message = j.at("message").get<std::string>;
    v.status = j.at("status").get<int32_t>;
    v.success = j.at("success").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolAccountVerificationInvalidateResponse_HPP
