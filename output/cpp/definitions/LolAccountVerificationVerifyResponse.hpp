#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAccountVerificationVerifyResponse_t {
    std::string message;
    int32_t status;
    bool success;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationVerifyResponse_t& v) {
    j["message"] = v.message;
    j["status"] = v.status;
    j["success"] = v.success;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationVerifyResponse_t& v) {
    v.message = j.at("message").get<std::string>();
    v.status = j.at("status").get<int32_t>();
    v.success = j.at("success").get<bool>();
  }
}
