#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LCDSPlayerMessagingSimpleMessage_t {
    std::string titleCode;
    std::string msgId;
    std::string bodyCode;
    std::vector<std::string> params;
    std::string type;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LCDSPlayerMessagingSimpleMessage_t& v) {
    j["titleCode"] = v.titleCode;
    j["msgId"] = v.msgId;
    j["bodyCode"] = v.bodyCode;
    j["params"] = v.params;
    j["type"] = v.type;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LCDSPlayerMessagingSimpleMessage_t& v) {
    v.titleCode = j.at("titleCode").get<std::string>();
    v.msgId = j.at("msgId").get<std::string>();
    v.bodyCode = j.at("bodyCode").get<std::string>();
    v.params = j.at("params").get<std::vector<std::string>>();
    v.type = j.at("type").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const LCDSPlayerMessagingSimpleMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
