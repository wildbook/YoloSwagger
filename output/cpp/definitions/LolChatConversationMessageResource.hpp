#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatConversationMessageResource_t {
    std::string timestamp;
    std::string id;
    std::string type;
    uint64_t fromId;
    bool isHistorical;
    std::string body;
  };

  inline void to_json(nlohmann::json& j, const LolChatConversationMessageResource_t& v) {
    j["timestamp"] = v.timestamp;
    j["id"] = v.id;
    j["type"] = v.type;
    j["fromId"] = v.fromId;
    j["isHistorical"] = v.isHistorical;
    j["body"] = v.body;
  }

  inline void from_json(const nlohmann::json& j, LolChatConversationMessageResource_t& v) {
    v.timestamp = j.at("timestamp").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.fromId = j.at("fromId").get<uint64_t>();
    v.isHistorical = j.at("isHistorical").get<bool>();
    v.body = j.at("body").get<std::string>();
  }
  inline std::string to_string(const LolChatConversationMessageResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
