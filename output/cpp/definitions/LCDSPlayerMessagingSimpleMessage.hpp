#ifndef SWAGGER_TYPES_LCDSPlayerMessagingSimpleMessage_HPP
#define SWAGGER_TYPES_LCDSPlayerMessagingSimpleMessage_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LCDSPlayerMessagingSimpleMessage {
    // 
    std::string titleCode;
    // 
    std::string msgId;
    // 
    std::string bodyCode;
    // 
    std::vector<std::string> params;
    // 
    std::string type;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LCDSPlayerMessagingSimpleMessage& v) {
    j["titleCode"] = v.titleCode;
    j["msgId"] = v.msgId;
    j["bodyCode"] = v.bodyCode;
    j["params"] = v.params;
    j["type"] = v.type;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LCDSPlayerMessagingSimpleMessage& v) {
    v.titleCode = j.at("titleCode").get<std::string>;
    v.msgId = j.at("msgId").get<std::string>;
    v.bodyCode = j.at("bodyCode").get<std::string>;
    v.params = j.at("params").get<std::vector<std::string>>;
    v.type = j.at("type").get<std::string>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LCDSPlayerMessagingSimpleMessage_HPP
