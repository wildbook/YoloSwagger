#ifndef SWAGGER_TYPES_SimpleDialogMessage_HPP
#define SWAGGER_TYPES_SimpleDialogMessage_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct SimpleDialogMessage {
    // 
    uint64_t accountId;
    // 
    std::string msgId;
    // 
    nlohmann::json params;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const SimpleDialogMessage& v) {
    j["accountId"] = v.accountId;
    j["msgId"] = v.msgId;
    j["params"] = v.params;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, SimpleDialogMessage& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.msgId = j.at("msgId").get<std::string>;
    v.params = j.at("params").get<nlohmann::json>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_SimpleDialogMessage_HPP
