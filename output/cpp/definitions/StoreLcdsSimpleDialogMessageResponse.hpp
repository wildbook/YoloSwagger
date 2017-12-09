#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct StoreLcdsSimpleDialogMessageResponse_t {
    uint64_t accountId;
    std::string command;
    std::string msgId;
  };

  inline void to_json(nlohmann::json& j, const StoreLcdsSimpleDialogMessageResponse_t& v) {
    j["accountId"] = v.accountId;
    j["command"] = v.command;
    j["msgId"] = v.msgId;
  }

  inline void from_json(const nlohmann::json& j, StoreLcdsSimpleDialogMessageResponse_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.command = j.at("command").get<std::string>();
    v.msgId = j.at("msgId").get<std::string>();
  }
  inline std::string to_string(const StoreLcdsSimpleDialogMessageResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
