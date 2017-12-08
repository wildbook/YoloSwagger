#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEmailVerificationValidationStatus_t {
    std::string_t emailStatus;
  };

  inline void to_json(nlohmann::json& j, const LolEmailVerificationValidationStatus_t& v) {
    j["emailStatus"] = v.emailStatus;
  }

  inline void from_json(const nlohmann::json& j, LolEmailVerificationValidationStatus_t& v) {
    v.emailStatus = j.at("emailStatus").get<std::string_t>();
  }
  inline std::string to_string(const LolEmailVerificationValidationStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
