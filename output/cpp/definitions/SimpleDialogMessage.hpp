#ifndef SWAGGER_TYPES_SimpleDialogMessage_HPP
#define SWAGGER_TYPES_SimpleDialogMessage_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct SimpleDialogMessage {
    // 
    std::string msgId;
    // 
    std::string type;
    // 
    nlohmann::json params;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const SimpleDialogMessage& v) {
    j["msgId"] = v.msgId;
    j["type"] = v.type;
    j["params"] = v.params;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, SimpleDialogMessage& v) {
    v.msgId = j.at("msgId").get<std::string>;
    v.type = j.at("type").get<std::string>;
    v.params = j.at("params").get<nlohmann::json>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_SimpleDialogMessage_HPP