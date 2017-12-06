#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthAuthorization_t {
    uint64_t currentAccountId;
    std::string currentPlatformId;
    std::string subject;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthAuthorization_t& v) {
    j["currentAccountId"] = v.currentAccountId;
    j["currentPlatformId"] = v.currentPlatformId;
    j["subject"] = v.subject;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthAuthorization_t& v) {
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>();
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>();
    v.subject = j.at("subject").get<std::string>();
  }
}
