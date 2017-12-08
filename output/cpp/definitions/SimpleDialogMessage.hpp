#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SimpleDialogMessage_t {
    std::string_t msgId;
    std::string_t type;
    nlohmann::json_t params;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const SimpleDialogMessage_t& v) {
    j["msgId"] = v.msgId;
    j["type"] = v.type;
    j["params"] = v.params;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, SimpleDialogMessage_t& v) {
    v.msgId = j.at("msgId").get<std::string_t>();
    v.type = j.at("type").get<std::string_t>();
    v.params = j.at("params").get<nlohmann::json_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const SimpleDialogMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
