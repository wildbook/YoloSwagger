#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct StoreLcdsSimpleDialogMessage_t {
    std::string type;
    uint64_t accountId;
    std::string msgId;
    std::vector<std::string> params;
  };

  inline void to_json(nlohmann::json& j, const StoreLcdsSimpleDialogMessage_t& v) {
    j["type"] = v.type;
    j["accountId"] = v.accountId;
    j["msgId"] = v.msgId;
    j["params"] = v.params;
  }

  inline void from_json(const nlohmann::json& j, StoreLcdsSimpleDialogMessage_t& v) {
    v.type = j.at("type").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.msgId = j.at("msgId").get<std::string>();
    v.params = j.at("params").get<std::vector<std::string>>();
  }
  inline std::string to_string(const StoreLcdsSimpleDialogMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
