#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SimpleDialogMessage_t {
    uint64_t accountId;
    std::string msgId;
    std::string type;
    nlohmann::json params;
  };

  inline void to_json(nlohmann::json& j, const SimpleDialogMessage_t& v) {
    j["accountId"] = v.accountId;
    j["msgId"] = v.msgId;
    j["type"] = v.type;
    j["params"] = v.params;
  }

  inline void from_json(const nlohmann::json& j, SimpleDialogMessage_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.msgId = j.at("msgId").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.params = j.at("params").get<nlohmann::json>();
  }
}
