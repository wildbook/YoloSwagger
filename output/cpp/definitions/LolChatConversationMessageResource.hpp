#ifndef SWAGGER_TYPES_LolChatConversationMessageResource_HPP
#define SWAGGER_TYPES_LolChatConversationMessageResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatConversationMessageResource {
    // 
    std::string body;
    // 
    std::string timestamp;
    // 
    bool isHistorical;
    // 
    uint64_t fromId;
    // 
    std::string type;
    // 
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const LolChatConversationMessageResource& v) {
    j["body"] = v.body;
    j["timestamp"] = v.timestamp;
    j["isHistorical"] = v.isHistorical;
    j["fromId"] = v.fromId;
    j["type"] = v.type;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChatConversationMessageResource& v) {
    v.body = j.at("body").get<std::string>;
    v.timestamp = j.at("timestamp").get<std::string>;
    v.isHistorical = j.at("isHistorical").get<bool>;
    v.fromId = j.at("fromId").get<uint64_t>;
    v.type = j.at("type").get<std::string>;
    v.id = j.at("id").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChatConversationMessageResource_HPP
