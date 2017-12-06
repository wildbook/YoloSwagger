#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LCDSPlayerMessagingSimpleMessage_t {
    std::string bodyCode;
    std::string titleCode;
    std::string type;
    std::vector<std::string> params;
    uint64_t accountId;
    std::string msgId;
  };

  inline void to_json(nlohmann::json& j, const LCDSPlayerMessagingSimpleMessage_t& v) {
    j["bodyCode"] = v.bodyCode;
    j["titleCode"] = v.titleCode;
    j["type"] = v.type;
    j["params"] = v.params;
    j["accountId"] = v.accountId;
    j["msgId"] = v.msgId;
  }

  inline void from_json(const nlohmann::json& j, LCDSPlayerMessagingSimpleMessage_t& v) {
    v.bodyCode = j.at("bodyCode").get<std::string>();
    v.titleCode = j.at("titleCode").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.params = j.at("params").get<std::vector<std::string>>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.msgId = j.at("msgId").get<std::string>();
  }
}
