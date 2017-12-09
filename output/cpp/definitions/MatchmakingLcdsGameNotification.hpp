#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MatchmakingLcdsGameNotification_t {
    std::string type;
    std::string messageCode;
    std::string messageArgument;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsGameNotification_t& v) {
    j["type"] = v.type;
    j["messageCode"] = v.messageCode;
    j["messageArgument"] = v.messageArgument;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsGameNotification_t& v) {
    v.type = j.at("type").get<std::string>();
    v.messageCode = j.at("messageCode").get<std::string>();
    v.messageArgument = j.at("messageArgument").get<std::string>();
  }
  inline std::string to_string(const MatchmakingLcdsGameNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
