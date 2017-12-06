#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootLoginSimpleMessage_t {
    uint64_t accountId;
    std::string msgId;
    std::vector<std::string> params;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolLootLoginSimpleMessage_t& v) {
    j["accountId"] = v.accountId;
    j["msgId"] = v.msgId;
    j["params"] = v.params;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolLootLoginSimpleMessage_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.msgId = j.at("msgId").get<std::string>();
    v.params = j.at("params").get<std::vector<std::string>>();
    v.type = j.at("type").get<std::string>();
  }
}
