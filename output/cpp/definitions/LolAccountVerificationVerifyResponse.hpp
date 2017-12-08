#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAccountVerificationVerifyResponse_t {
    int32_t_t status;
    std::string_t message;
    bool_t success;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationVerifyResponse_t& v) {
    j["status"] = v.status;
    j["message"] = v.message;
    j["success"] = v.success;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationVerifyResponse_t& v) {
    v.status = j.at("status").get<int32_t_t>();
    v.message = j.at("message").get<std::string_t>();
    v.success = j.at("success").get<bool_t>();
  }
  inline std::string to_string(const LolAccountVerificationVerifyResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
