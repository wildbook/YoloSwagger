#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LCDSPlayerMessagingSimpleMessage_t {
    std::string titleCode;
    std::string bodyCode;
    uint64_t accountId;
    std::vector<std::string> params;
    std::string msgId;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LCDSPlayerMessagingSimpleMessage_t& v) {
    j["titleCode"] = v.titleCode;
    j["bodyCode"] = v.bodyCode;
    j["accountId"] = v.accountId;
    j["params"] = v.params;
    j["msgId"] = v.msgId;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LCDSPlayerMessagingSimpleMessage_t& v) {
    v.titleCode = j.at("titleCode").get<std::string>();
    v.bodyCode = j.at("bodyCode").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.params = j.at("params").get<std::vector<std::string>>();
    v.msgId = j.at("msgId").get<std::string>();
    v.type = j.at("type").get<std::string>();
  }
  inline std::string to_string(const LCDSPlayerMessagingSimpleMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
