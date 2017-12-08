#pragma once
#include <json.hpp>
#include <optional>
#include "ShutdownReason.hpp"
namespace leagueapi {
  struct ShutdownNotification_t {
    float countdown;
    std::string additionalInfo;
    ShutdownReason_t reason;
  };

  inline void to_json(nlohmann::json& j, const ShutdownNotification_t& v) {
    j["countdown"] = v.countdown;
    j["additionalInfo"] = v.additionalInfo;
    j["reason"] = v.reason;
  }

  inline void from_json(const nlohmann::json& j, ShutdownNotification_t& v) {
    v.countdown = j.at("countdown").get<float>();
    v.additionalInfo = j.at("additionalInfo").get<std::string>();
    v.reason = j.at("reason").get<ShutdownReason_t>();
  }
  inline std::string to_string(const ShutdownNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
