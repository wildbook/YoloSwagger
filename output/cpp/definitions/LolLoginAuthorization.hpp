#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginAuthorization_t {
    std::string subject;
    std::string currentPlatformId;
    uint64_t currentAccountId;
  };

  inline void to_json(nlohmann::json& j, const LolLoginAuthorization_t& v) {
    j["subject"] = v.subject;
    j["currentPlatformId"] = v.currentPlatformId;
    j["currentAccountId"] = v.currentAccountId;
  }

  inline void from_json(const nlohmann::json& j, LolLoginAuthorization_t& v) {
    v.subject = j.at("subject").get<std::string>();
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>();
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>();
  }
  inline std::string to_string(const LolLoginAuthorization_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
