#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsGameNotification_t {
    std::string messageCode;
    std::string type;
    std::string messageArgument;
  };

  inline void to_json(nlohmann::json& j, const LcdsGameNotification_t& v) {
    j["messageCode"] = v.messageCode;
    j["type"] = v.type;
    j["messageArgument"] = v.messageArgument;
  }

  inline void from_json(const nlohmann::json& j, LcdsGameNotification_t& v) {
    v.messageCode = j.at("messageCode").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.messageArgument = j.at("messageArgument").get<std::string>();
  }
  inline std::string to_string(const LcdsGameNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
