#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatConversationMessageResource_t {
    std::string_t body;
    std::string_t timestamp;
    bool_t isHistorical;
    uint64_t_t fromId;
    std::string_t type;
    std::string_t id;
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
    v.body = j.at("body").get<std::string_t>();
    v.timestamp = j.at("timestamp").get<std::string_t>();
    v.isHistorical = j.at("isHistorical").get<bool_t>();
    v.fromId = j.at("fromId").get<uint64_t_t>();
    v.type = j.at("type").get<std::string_t>();
    v.id = j.at("id").get<std::string_t>();
  }
  inline std::string to_string(const LolChatConversationMessageResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
