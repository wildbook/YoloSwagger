#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderContactStateResource_t {
    uint64_t accountId;
    std::string displayState;
    std::string action;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderContactStateResource_t& v) {
    j["accountId"] = v.accountId;
    j["displayState"] = v.displayState;
    j["action"] = v.action;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderContactStateResource_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.displayState = j.at("displayState").get<std::string>();
    v.action = j.at("action").get<std::string>();
  }
  inline std::string to_string(const RecofrienderContactStateResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
