#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsGameNotification_t {
    std::string_t messageCode;
    std::string_t messageArgument;
    std::string_t type;
  };

  inline void to_json(nlohmann::json& j, const LcdsGameNotification_t& v) {
    j["messageCode"] = v.messageCode;
    j["messageArgument"] = v.messageArgument;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LcdsGameNotification_t& v) {
    v.messageCode = j.at("messageCode").get<std::string_t>();
    v.messageArgument = j.at("messageArgument").get<std::string_t>();
    v.type = j.at("type").get<std::string_t>();
  }
  inline std::string to_string(const LcdsGameNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
