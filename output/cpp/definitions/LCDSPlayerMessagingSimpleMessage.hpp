#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LCDSPlayerMessagingSimpleMessage_t {
    std::vector<std::string> params;
    std::string titleCode;
    uint64_t accountId;
    std::string type;
    std::string msgId;
    std::string bodyCode;
  };

  inline void to_json(nlohmann::json& j, const LCDSPlayerMessagingSimpleMessage_t& v) {
    j["params"] = v.params;
    j["titleCode"] = v.titleCode;
    j["accountId"] = v.accountId;
    j["type"] = v.type;
    j["msgId"] = v.msgId;
    j["bodyCode"] = v.bodyCode;
  }

  inline void from_json(const nlohmann::json& j, LCDSPlayerMessagingSimpleMessage_t& v) {
    v.params = j.at("params").get<std::vector<std::string>>();
    v.titleCode = j.at("titleCode").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.type = j.at("type").get<std::string>();
    v.msgId = j.at("msgId").get<std::string>();
    v.bodyCode = j.at("bodyCode").get<std::string>();
  }
  inline std::string to_string(const LCDSPlayerMessagingSimpleMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
