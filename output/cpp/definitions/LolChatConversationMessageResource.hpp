#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatConversationMessageResource_t {
    std::string timestamp;
    std::string type;
    bool isHistorical;
    std::string id;
    std::string body;
    uint64_t fromId;
  };

  inline void to_json(nlohmann::json& j, const LolChatConversationMessageResource_t& v) {
    j["timestamp"] = v.timestamp;
    j["type"] = v.type;
    j["isHistorical"] = v.isHistorical;
    j["id"] = v.id;
    j["body"] = v.body;
    j["fromId"] = v.fromId;
  }

  inline void from_json(const nlohmann::json& j, LolChatConversationMessageResource_t& v) {
    v.timestamp = j.at("timestamp").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.isHistorical = j.at("isHistorical").get<bool>();
    v.id = j.at("id").get<std::string>();
    v.body = j.at("body").get<std::string>();
    v.fromId = j.at("fromId").get<uint64_t>();
  }
  inline std::string to_string(const LolChatConversationMessageResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
