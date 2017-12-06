#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAccountVerificationVerifyResponse_t {
    std::string message;
    bool success;
    int32_t status;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationVerifyResponse_t& v) {
    j["message"] = v.message;
    j["success"] = v.success;
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationVerifyResponse_t& v) {
    v.message = j.at("message").get<std::string>();
    v.success = j.at("success").get<bool>();
    v.status = j.at("status").get<int32_t>();
  }
}
