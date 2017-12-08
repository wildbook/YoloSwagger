#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginAuthorization_t {
    uint64_t currentAccountId;
    std::string currentPlatformId;
    std::string subject;
  };

  inline void to_json(nlohmann::json& j, const LolLoginAuthorization_t& v) {
    j["currentAccountId"] = v.currentAccountId;
    j["currentPlatformId"] = v.currentPlatformId;
    j["subject"] = v.subject;
  }

  inline void from_json(const nlohmann::json& j, LolLoginAuthorization_t& v) {
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>();
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>();
    v.subject = j.at("subject").get<std::string>();
  }
  inline std::string to_string(const LolLoginAuthorization_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
