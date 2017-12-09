#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerBehaviorSimpleMessageResponse_t {
    std::string command;
    uint64_t accountId;
    std::string msgId;
  };

  inline void to_json(nlohmann::json& j, const PlayerBehaviorSimpleMessageResponse_t& v) {
    j["command"] = v.command;
    j["accountId"] = v.accountId;
    j["msgId"] = v.msgId;
  }

  inline void from_json(const nlohmann::json& j, PlayerBehaviorSimpleMessageResponse_t& v) {
    v.command = j.at("command").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.msgId = j.at("msgId").get<std::string>();
  }
  inline std::string to_string(const PlayerBehaviorSimpleMessageResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
