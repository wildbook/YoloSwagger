#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAccountVerificationVerifyResponse_t {
    bool success;
    int32_t status;
    std::string message;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationVerifyResponse_t& v) {
    j["success"] = v.success;
    j["status"] = v.status;
    j["message"] = v.message;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationVerifyResponse_t& v) {
    v.success = j.at("success").get<bool>();
    v.status = j.at("status").get<int32_t>();
    v.message = j.at("message").get<std::string>();
  }
  inline std::string to_string(const LolAccountVerificationVerifyResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
