#ifndef SWAGGER_TYPES_PlayerBehaviorSimpleMessageResponse_HPP
#define SWAGGER_TYPES_PlayerBehaviorSimpleMessageResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PlayerBehaviorSimpleMessageResponse {
    // 
    std::string msgId;
    // 
    std::string command;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const PlayerBehaviorSimpleMessageResponse& v) {
    j["msgId"] = v.msgId;
    j["command"] = v.command;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, PlayerBehaviorSimpleMessageResponse& v) {
    v.msgId = j.at("msgId").get<std::string>;
    v.command = j.at("command").get<std::string>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_PlayerBehaviorSimpleMessageResponse_HPP
