#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsSimpleMessage_t {
    std::string msgId;
    std::string type;
    std::vector<std::string> params;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LcdsSimpleMessage_t& v) {
    j["msgId"] = v.msgId;
    j["type"] = v.type;
    j["params"] = v.params;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LcdsSimpleMessage_t& v) {
    v.msgId = j.at("msgId").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.params = j.at("params").get<std::vector<std::string>>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const LcdsSimpleMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
