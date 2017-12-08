#pragma once
#include <json.hpp>
#include <optional>
#include "ShutdownReason.hpp"
namespace leagueapi {
  struct ShutdownNotification_t {
    ShutdownReason_t reason;
    std::string additionalInfo;
    float countdown;
  };

  inline void to_json(nlohmann::json& j, const ShutdownNotification_t& v) {
    j["reason"] = v.reason;
    j["additionalInfo"] = v.additionalInfo;
    j["countdown"] = v.countdown;
  }

  inline void from_json(const nlohmann::json& j, ShutdownNotification_t& v) {
    v.reason = j.at("reason").get<ShutdownReason_t>();
    v.additionalInfo = j.at("additionalInfo").get<std::string>();
    v.countdown = j.at("countdown").get<float>();
  }
  inline std::string to_string(const ShutdownNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
