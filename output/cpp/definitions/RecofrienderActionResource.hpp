#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderActionResource_t {
    std::string_t action;
    std::string_t platformId;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderActionResource_t& v) {
    j["action"] = v.action;
    j["platformId"] = v.platformId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderActionResource_t& v) {
    v.action = j.at("action").get<std::string_t>();
    v.platformId = j.at("platformId").get<std::string_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const RecofrienderActionResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
