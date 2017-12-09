#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsGameNotification_t {
    std::string messageArgument;
    std::string type;
    std::string messageCode;
  };

  inline void to_json(nlohmann::json& j, const LcdsGameNotification_t& v) {
    j["messageArgument"] = v.messageArgument;
    j["type"] = v.type;
    j["messageCode"] = v.messageCode;
  }

  inline void from_json(const nlohmann::json& j, LcdsGameNotification_t& v) {
    v.messageArgument = j.at("messageArgument").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.messageCode = j.at("messageCode").get<std::string>();
  }
  inline std::string to_string(const LcdsGameNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
