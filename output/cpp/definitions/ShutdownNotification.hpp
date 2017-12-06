#pragma once
#include <json.hpp>
#include <optional>
#include "ShutdownReason.hpp"
namespace leagueapi {
  struct ShutdownNotification_t {
    std::string additionalInfo;
    float countdown;
    ShutdownReason_t reason;
  };

  inline void to_json(nlohmann::json& j, const ShutdownNotification_t& v) {
    j["additionalInfo"] = v.additionalInfo;
    j["countdown"] = v.countdown;
    j["reason"] = v.reason;
  }

  inline void from_json(const nlohmann::json& j, ShutdownNotification_t& v) {
    v.additionalInfo = j.at("additionalInfo").get<std::string>();
    v.countdown = j.at("countdown").get<float>();
    v.reason = j.at("reason").get<ShutdownReason_t>();
  }
}
