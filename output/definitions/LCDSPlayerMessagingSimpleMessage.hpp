#ifndef SWAGGER_TYPES_LCDSPlayerMessagingSimpleMessage_HPP
#define SWAGGER_TYPES_LCDSPlayerMessagingSimpleMessage_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LCDSPlayerMessagingSimpleMessage {
    // 
    uint64_t accountId;
    // 
    std::string bodyCode;
    // 
    std::string msgId;
    // 
    std::vector<std::string> params;
    // 
    std::string titleCode;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const LCDSPlayerMessagingSimpleMessage& v) {
    j["accountId"] = v.accountId;
    j["bodyCode"] = v.bodyCode;
    j["msgId"] = v.msgId;
    j["params"] = v.params;
    j["titleCode"] = v.titleCode;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, LCDSPlayerMessagingSimpleMessage& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.bodyCode = j.at("bodyCode").get<std::string>;
    v.msgId = j.at("msgId").get<std::string>;
    v.params = j.at("params").get<std::vector<std::string>>;
    v.titleCode = j.at("titleCode").get<std::string>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LCDSPlayerMessagingSimpleMessage_HPP
