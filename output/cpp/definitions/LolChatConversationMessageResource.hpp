#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatConversationMessageResource_t {
    std::string type;
    bool isHistorical;
    std::string timestamp;
    std::string body;
    std::string id;
    uint64_t fromId;
  };

  inline void to_json(nlohmann::json& j, const LolChatConversationMessageResource_t& v) {
    j["type"] = v.type;
    j["isHistorical"] = v.isHistorical;
    j["timestamp"] = v.timestamp;
    j["body"] = v.body;
    j["id"] = v.id;
    j["fromId"] = v.fromId;
  }

  inline void from_json(const nlohmann::json& j, LolChatConversationMessageResource_t& v) {
    v.type = j.at("type").get<std::string>();
    v.isHistorical = j.at("isHistorical").get<bool>();
    v.timestamp = j.at("timestamp").get<std::string>();
    v.body = j.at("body").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.fromId = j.at("fromId").get<uint64_t>();
  }
  inline std::string to_string(const LolChatConversationMessageResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
