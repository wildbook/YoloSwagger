#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatConversationMessageResource_t {
    std::string body;
    std::string timestamp;
    bool isHistorical;
    uint64_t fromId;
    std::string type;
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const LolChatConversationMessageResource_t& v) {
    j["body"] = v.body;
    j["timestamp"] = v.timestamp;
    j["isHistorical"] = v.isHistorical;
    j["fromId"] = v.fromId;
    j["type"] = v.type;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChatConversationMessageResource_t& v) {
    v.body = j.at("body").get<std::string>();
    v.timestamp = j.at("timestamp").get<std::string>();
    v.isHistorical = j.at("isHistorical").get<bool>();
    v.fromId = j.at("fromId").get<uint64_t>();
    v.type = j.at("type").get<std::string>();
    v.id = j.at("id").get<std::string>();
  }
  inline std::string to_string(const LolChatConversationMessageResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
