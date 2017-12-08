#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginLoginError_t {
    std::string messageId;
    std::string description;
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginError_t& v) {
    j["messageId"] = v.messageId;
    j["description"] = v.description;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginError_t& v) {
    v.messageId = j.at("messageId").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.id = j.at("id").get<std::string>();
  }
  inline std::string to_string(const LolLoginLoginError_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
