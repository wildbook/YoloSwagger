#ifndef SWAGGER_TYPES_LeaguesLcdsSimpleMessage_HPP
#define SWAGGER_TYPES_LeaguesLcdsSimpleMessage_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LeaguesLcdsSimpleMessage {
    // 
    uint64_t accountId;
    // 
    std::string msgId;
    // 
    std::vector<std::string> params;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const LeaguesLcdsSimpleMessage& v) {
    j["accountId"] = v.accountId;
    j["msgId"] = v.msgId;
    j["params"] = v.params;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, LeaguesLcdsSimpleMessage& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.msgId = j.at("msgId").get<std::string>;
    v.params = j.at("params").get<std::vector<std::string>>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsSimpleMessage_HPP
