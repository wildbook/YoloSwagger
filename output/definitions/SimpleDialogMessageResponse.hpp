#ifndef SWAGGER_TYPES_SimpleDialogMessageResponse_HPP
#define SWAGGER_TYPES_SimpleDialogMessageResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct SimpleDialogMessageResponse {
    // 
    uint64_t accountId;
    // 
    std::string command;
    // 
    std::string msgId;
  };

  inline void to_json(nlohmann::json& j, const SimpleDialogMessageResponse& v) {
    j["accountId"] = v.accountId;
    j["command"] = v.command;
    j["msgId"] = v.msgId;
  }

  inline void from_json(const nlohmann::json& j, SimpleDialogMessageResponse& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.command = j.at("command").get<std::string>;
    v.msgId = j.at("msgId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_SimpleDialogMessageResponse_HPP
