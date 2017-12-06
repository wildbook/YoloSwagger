#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthAuthorization_t {
    std::string subject;
    uint64_t currentAccountId;
    std::string currentPlatformId;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthAuthorization_t& v) {
    j["subject"] = v.subject;
    j["currentAccountId"] = v.currentAccountId;
    j["currentPlatformId"] = v.currentPlatformId;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthAuthorization_t& v) {
    v.subject = j.at("subject").get<std::string>();
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>();
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>();
  }
}
