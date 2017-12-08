#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsSimpleMessageResponse_t {
    std::string_t msgId;
    std::string_t command;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LcdsSimpleMessageResponse_t& v) {
    j["msgId"] = v.msgId;
    j["command"] = v.command;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LcdsSimpleMessageResponse_t& v) {
    v.msgId = j.at("msgId").get<std::string_t>();
    v.command = j.at("command").get<std::string_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LcdsSimpleMessageResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
