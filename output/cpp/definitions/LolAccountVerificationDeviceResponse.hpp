#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAccountVerificationDeviceResponse_t {
    bool success;
    std::string message;
    int32_t status;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationDeviceResponse_t& v) {
    j["success"] = v.success;
    j["message"] = v.message;
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationDeviceResponse_t& v) {
    v.success = j.at("success").get<bool>();
    v.message = j.at("message").get<std::string>();
    v.status = j.at("status").get<int32_t>();
  }
  inline std::string to_string(const LolAccountVerificationDeviceResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
