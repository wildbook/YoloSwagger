#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SimpleDialogMessage_t {
    std::string type;
    uint64_t accountId;
    std::string msgId;
    nlohmann::json params;
  };

  inline void to_json(nlohmann::json& j, const SimpleDialogMessage_t& v) {
    j["type"] = v.type;
    j["accountId"] = v.accountId;
    j["msgId"] = v.msgId;
    j["params"] = v.params;
  }

  inline void from_json(const nlohmann::json& j, SimpleDialogMessage_t& v) {
    v.type = j.at("type").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.msgId = j.at("msgId").get<std::string>();
    v.params = j.at("params").get<nlohmann::json>();
  }
  inline std::string to_string(const SimpleDialogMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
