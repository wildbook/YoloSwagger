#ifndef SWAGGER_TYPES_LCDSPlayerMessagingSimpleMessageResponse_HPP
#define SWAGGER_TYPES_LCDSPlayerMessagingSimpleMessageResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LCDSPlayerMessagingSimpleMessageResponse {
    // 
    uint64_t accountId;
    // 
    std::string command;
    // 
    std::string msgId;
  };

  inline void to_json(nlohmann::json& j, const LCDSPlayerMessagingSimpleMessageResponse& v) {
    j["accountId"] = v.accountId;
    j["command"] = v.command;
    j["msgId"] = v.msgId;
  }

  inline void from_json(const nlohmann::json& j, LCDSPlayerMessagingSimpleMessageResponse& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.command = j.at("command").get<std::string>;
    v.msgId = j.at("msgId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LCDSPlayerMessagingSimpleMessageResponse_HPP
