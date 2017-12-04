#ifndef SWAGGER_TYPES_LolSimpleDialogMessagesLocalMessageRequest_HPP
#define SWAGGER_TYPES_LolSimpleDialogMessagesLocalMessageRequest_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolSimpleDialogMessagesLocalMessageRequest {
'    // 
    std::vector<std::string> msgBody;
    // 
    std::string msgType;
  };

  void to_json(nlohmann::json& j, const LolSimpleDialogMessagesLocalMessageRequest& v) {
    j["msgBody"] = v.msgBody;
    j["msgType"] = v.msgType;
  }

  void from_json(const nlohmann::json& j, LolSimpleDialogMessagesLocalMessageRequest& v) {
    v.msgBody = j.at("msgBody").get<std::vector<std::string>>;
    v.msgType = j.at("msgType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolSimpleDialogMessagesLocalMessageRequest_HPP
