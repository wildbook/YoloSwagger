#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LCDSPlayerMessagingSimpleMessage_t {
    uint64_t accountId;
    std::string bodyCode;
    std::string msgId;
    std::vector<std::string> params;
    std::string titleCode;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LCDSPlayerMessagingSimpleMessage_t& v) {
    j["accountId"] = v.accountId;
    j["bodyCode"] = v.bodyCode;
    j["msgId"] = v.msgId;
    j["params"] = v.params;
    j["titleCode"] = v.titleCode;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LCDSPlayerMessagingSimpleMessage_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.bodyCode = j.at("bodyCode").get<std::string>();
    v.msgId = j.at("msgId").get<std::string>();
    v.params = j.at("params").get<std::vector<std::string>>();
    v.titleCode = j.at("titleCode").get<std::string>();
    v.type = j.at("type").get<std::string>();
  }
}
