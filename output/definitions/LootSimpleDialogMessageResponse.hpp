#ifndef SWAGGER_TYPES_LootSimpleDialogMessageResponse_HPP
#define SWAGGER_TYPES_LootSimpleDialogMessageResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LootSimpleDialogMessageResponse {
    // 
    uint64_t accountId;
    // 
    std::string command;
    // 
    std::string msgId;
  };

  void to_json(nlohmann::json& j, const LootSimpleDialogMessageResponse& v) {
    j["accountId"] = v.accountId;
    j["command"] = v.command;
    j["msgId"] = v.msgId;
  }

  void from_json(const nlohmann::json& j, LootSimpleDialogMessageResponse& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.command = j.at("command").get<std::string>;
    v.msgId = j.at("msgId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LootSimpleDialogMessageResponse_HPP
