#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthAuthorization_t {
    std::string currentPlatformId;
    std::string subject;
    uint64_t currentAccountId;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthAuthorization_t& v) {
    j["currentPlatformId"] = v.currentPlatformId;
    j["subject"] = v.subject;
    j["currentAccountId"] = v.currentAccountId;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthAuthorization_t& v) {
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>();
    v.subject = j.at("subject").get<std::string>();
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>();
  }
  inline std::string to_string(const RsoAuthAuthorization_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
