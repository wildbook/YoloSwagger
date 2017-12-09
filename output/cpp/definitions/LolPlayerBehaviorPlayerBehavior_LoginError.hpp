#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPlayerBehaviorPlayerBehavior_LoginError_t {
    std::string id;
    std::string messageId;
    std::string description;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorPlayerBehavior_LoginError_t& v) {
    j["id"] = v.id;
    j["messageId"] = v.messageId;
    j["description"] = v.description;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorPlayerBehavior_LoginError_t& v) {
    v.id = j.at("id").get<std::string>();
    v.messageId = j.at("messageId").get<std::string>();
    v.description = j.at("description").get<std::string>();
  }
  inline std::string to_string(const LolPlayerBehaviorPlayerBehavior_LoginError_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
