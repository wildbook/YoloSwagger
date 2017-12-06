#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsGameNotification_t {
    std::string messageArgument;
    std::string messageCode;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LcdsGameNotification_t& v) {
    j["messageArgument"] = v.messageArgument;
    j["messageCode"] = v.messageCode;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LcdsGameNotification_t& v) {
    v.messageArgument = j.at("messageArgument").get<std::string>();
    v.messageCode = j.at("messageCode").get<std::string>();
    v.type = j.at("type").get<std::string>();
  }
}
