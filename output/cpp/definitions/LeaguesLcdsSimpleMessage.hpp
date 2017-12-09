#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LeaguesLcdsSimpleMessage_t {
    uint64_t accountId;
    std::string type;
    std::string msgId;
    std::vector<std::string> params;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsSimpleMessage_t& v) {
    j["accountId"] = v.accountId;
    j["type"] = v.type;
    j["msgId"] = v.msgId;
    j["params"] = v.params;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsSimpleMessage_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.type = j.at("type").get<std::string>();
    v.msgId = j.at("msgId").get<std::string>();
    v.params = j.at("params").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LeaguesLcdsSimpleMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
