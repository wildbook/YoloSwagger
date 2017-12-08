#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderContactStateResource_t {
    std::string action;
    std::string displayState;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderContactStateResource_t& v) {
    j["action"] = v.action;
    j["displayState"] = v.displayState;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderContactStateResource_t& v) {
    v.action = j.at("action").get<std::string>();
    v.displayState = j.at("displayState").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const RecofrienderContactStateResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
