#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAccountVerificationDeviceResponse_t {
    int32_t status;
    std::string message;
    bool success;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationDeviceResponse_t& v) {
    j["status"] = v.status;
    j["message"] = v.message;
    j["success"] = v.success;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationDeviceResponse_t& v) {
    v.status = j.at("status").get<int32_t>();
    v.message = j.at("message").get<std::string>();
    v.success = j.at("success").get<bool>();
  }
  inline std::string to_string(const LolAccountVerificationDeviceResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
