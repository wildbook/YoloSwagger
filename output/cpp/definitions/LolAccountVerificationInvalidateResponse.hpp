#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAccountVerificationInvalidateResponse_t {
    int32_t status;
    bool success;
    std::string message;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationInvalidateResponse_t& v) {
    j["status"] = v.status;
    j["success"] = v.success;
    j["message"] = v.message;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationInvalidateResponse_t& v) {
    v.status = j.at("status").get<int32_t>();
    v.success = j.at("success").get<bool>();
    v.message = j.at("message").get<std::string>();
  }
  inline std::string to_string(const LolAccountVerificationInvalidateResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
