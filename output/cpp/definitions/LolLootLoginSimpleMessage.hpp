#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootLoginSimpleMessage_t {
    std::vector<std::string> params;
    uint64_t accountId;
    std::string type;
    std::string msgId;
  };

  inline void to_json(nlohmann::json& j, const LolLootLoginSimpleMessage_t& v) {
    j["params"] = v.params;
    j["accountId"] = v.accountId;
    j["type"] = v.type;
    j["msgId"] = v.msgId;
  }

  inline void from_json(const nlohmann::json& j, LolLootLoginSimpleMessage_t& v) {
    v.params = j.at("params").get<std::vector<std::string>>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.type = j.at("type").get<std::string>();
    v.msgId = j.at("msgId").get<std::string>();
  }
  inline std::string to_string(const LolLootLoginSimpleMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
