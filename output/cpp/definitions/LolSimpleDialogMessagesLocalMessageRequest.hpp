#ifndef SWAGGER_TYPES_LolSimpleDialogMessagesLocalMessageRequest_HPP
#define SWAGGER_TYPES_LolSimpleDialogMessagesLocalMessageRequest_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSimpleDialogMessagesLocalMessageRequest {
    // 
    std::string msgType;
    // 
    std::vector<std::string> msgBody;
  };

  inline void to_json(nlohmann::json& j, const LolSimpleDialogMessagesLocalMessageRequest& v) {
    j["msgType"] = v.msgType;
    j["msgBody"] = v.msgBody;
  }

  inline void from_json(const nlohmann::json& j, LolSimpleDialogMessagesLocalMessageRequest& v) {
    v.msgType = j.at("msgType").get<std::string>;
    v.msgBody = j.at("msgBody").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_LolSimpleDialogMessagesLocalMessageRequest_HPP
