#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatConversationMessageResource_t {
    bool isHistorical;
    std::string id;
    std::string type;
    std::string body;
    std::string timestamp;
    uint64_t fromId;
  };

  inline void to_json(nlohmann::json& j, const LolChatConversationMessageResource_t& v) {
    j["isHistorical"] = v.isHistorical;
    j["id"] = v.id;
    j["type"] = v.type;
    j["body"] = v.body;
    j["timestamp"] = v.timestamp;
    j["fromId"] = v.fromId;
  }

  inline void from_json(const nlohmann::json& j, LolChatConversationMessageResource_t& v) {
    v.isHistorical = j.at("isHistorical").get<bool>();
    v.id = j.at("id").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.body = j.at("body").get<std::string>();
    v.timestamp = j.at("timestamp").get<std::string>();
    v.fromId = j.at("fromId").get<uint64_t>();
  }
}
