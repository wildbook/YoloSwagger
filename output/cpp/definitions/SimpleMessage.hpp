#ifndef SWAGGER_TYPES_SimpleMessage_HPP
#define SWAGGER_TYPES_SimpleMessage_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct SimpleMessage {
    // 
    std::string msgId;
    // 
    std::string type;
    // 
    std::vector<std::string> params;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const SimpleMessage& v) {
    j["msgId"] = v.msgId;
    j["type"] = v.type;
    j["params"] = v.params;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, SimpleMessage& v) {
    v.msgId = j.at("msgId").get<std::string>;
    v.type = j.at("type").get<std::string>;
    v.params = j.at("params").get<std::vector<std::string>>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_SimpleMessage_HPP
