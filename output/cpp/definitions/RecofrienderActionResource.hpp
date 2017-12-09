#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderActionResource_t {
    uint64_t accountId;
    std::string action;
    std::string platformId;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderActionResource_t& v) {
    j["accountId"] = v.accountId;
    j["action"] = v.action;
    j["platformId"] = v.platformId;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderActionResource_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.action = j.at("action").get<std::string>();
    v.platformId = j.at("platformId").get<std::string>();
  }
  inline std::string to_string(const RecofrienderActionResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
