#ifndef SWAGGER_TYPES_StoreLcdsSimpleDialogMessageResponse_HPP
#define SWAGGER_TYPES_StoreLcdsSimpleDialogMessageResponse_HPP
#include <json.hpp>
namespace test {
  // 
  struct StoreLcdsSimpleDialogMessageResponse {
'    // 
    uint64_t accountId;
    // 
    std::string command;
    // 
    std::string msgId;
  };

  void to_json(nlohmann::json& j, const StoreLcdsSimpleDialogMessageResponse& v) {
    j["accountId"] = v.accountId;
    j["command"] = v.command;
    j["msgId"] = v.msgId;
  }

  void from_json(const nlohmann::json& j, StoreLcdsSimpleDialogMessageResponse& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.command = j.at("command").get<std::string>;
    v.msgId = j.at("msgId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_StoreLcdsSimpleDialogMessageResponse_HPP
