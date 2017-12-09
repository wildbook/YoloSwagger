#pragma once
#include <json.hpp>
#include <optional>
#include "ShutdownReason.hpp"
namespace leagueapi {
  struct ShutdownNotification_t {
    ShutdownReason_t reason;
    float countdown;
    std::string additionalInfo;
  };

  inline void to_json(nlohmann::json& j, const ShutdownNotification_t& v) {
    j["reason"] = v.reason;
    j["countdown"] = v.countdown;
    j["additionalInfo"] = v.additionalInfo;
  }

  inline void from_json(const nlohmann::json& j, ShutdownNotification_t& v) {
    v.reason = j.at("reason").get<ShutdownReason_t>();
    v.countdown = j.at("countdown").get<float>();
    v.additionalInfo = j.at("additionalInfo").get<std::string>();
  }
  inline std::string to_string(const ShutdownNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
