#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSimpleDialogMessagesLocalMessageRequest_t {
    std::vector<std::string> msgBody;
    std::string msgType;
  };

  inline void to_json(nlohmann::json& j, const LolSimpleDialogMessagesLocalMessageRequest_t& v) {
    j["msgBody"] = v.msgBody;
    j["msgType"] = v.msgType;
  }

  inline void from_json(const nlohmann::json& j, LolSimpleDialogMessagesLocalMessageRequest_t& v) {
    v.msgBody = j.at("msgBody").get<std::vector<std::string>>();
    v.msgType = j.at("msgType").get<std::string>();
  }
}
