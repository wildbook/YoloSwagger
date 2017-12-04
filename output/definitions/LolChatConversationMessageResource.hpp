#ifndef SWAGGER_TYPES_LolChatConversationMessageResource_HPP
#define SWAGGER_TYPES_LolChatConversationMessageResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatConversationMessageResource {
    // 
    std::string body;
    // 
    uint64_t fromId;
    // 
    std::string id;
    // 
    bool isHistorical;
    // 
    std::string timestamp;
    // 
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolChatConversationMessageResource& v) {
    j["body"] = v.body;
    j["fromId"] = v.fromId;
    j["id"] = v.id;
    j["isHistorical"] = v.isHistorical;
    j["timestamp"] = v.timestamp;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolChatConversationMessageResource& v) {
    v.body = j.at("body").get<std::string>;
    v.fromId = j.at("fromId").get<uint64_t>;
    v.id = j.at("id").get<std::string>;
    v.isHistorical = j.at("isHistorical").get<bool>;
    v.timestamp = j.at("timestamp").get<std::string>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChatConversationMessageResource_HPP
