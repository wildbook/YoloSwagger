#ifndef SWAGGER_TYPES_LolChatDebugResource_HPP
#define SWAGGER_TYPES_LolChatDebugResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatDebugResource {
    // 
    uint32_t minReconnectInterval;
    // 
    bool triggerChatDisconnect;
    // 
    bool failAllChatLogin;
    // 
    bool failNextChatLogout;
    // 
    uint32_t keepAliveInterval;
    // 
    bool isXMPPLoggingEnabled;
    // 
    bool failNextChatLogin;
    // 
    bool enableChatFiltering;
    // 
    uint32_t maxReconnectInterval;
    // 
    uint32_t asyncWaitInterval;
    // 
    bool failNextKeepAlive;
    // 
    bool silenceChatWhileInGame;
  };

  inline void to_json(nlohmann::json& j, const LolChatDebugResource& v) {
    j["minReconnectInterval"] = v.minReconnectInterval;
    j["triggerChatDisconnect"] = v.triggerChatDisconnect;
    j["failAllChatLogin"] = v.failAllChatLogin;
    j["failNextChatLogout"] = v.failNextChatLogout;
    j["keepAliveInterval"] = v.keepAliveInterval;
    j["isXMPPLoggingEnabled"] = v.isXMPPLoggingEnabled;
    j["failNextChatLogin"] = v.failNextChatLogin;
    j["enableChatFiltering"] = v.enableChatFiltering;
    j["maxReconnectInterval"] = v.maxReconnectInterval;
    j["asyncWaitInterval"] = v.asyncWaitInterval;
    j["failNextKeepAlive"] = v.failNextKeepAlive;
    j["silenceChatWhileInGame"] = v.silenceChatWhileInGame;
  }

  inline void from_json(const nlohmann::json& j, LolChatDebugResource& v) {
    v.minReconnectInterval = j.at("minReconnectInterval").get<uint32_t>;
    v.triggerChatDisconnect = j.at("triggerChatDisconnect").get<bool>;
    v.failAllChatLogin = j.at("failAllChatLogin").get<bool>;
    v.failNextChatLogout = j.at("failNextChatLogout").get<bool>;
    v.keepAliveInterval = j.at("keepAliveInterval").get<uint32_t>;
    v.isXMPPLoggingEnabled = j.at("isXMPPLoggingEnabled").get<bool>;
    v.failNextChatLogin = j.at("failNextChatLogin").get<bool>;
    v.enableChatFiltering = j.at("enableChatFiltering").get<bool>;
    v.maxReconnectInterval = j.at("maxReconnectInterval").get<uint32_t>;
    v.asyncWaitInterval = j.at("asyncWaitInterval").get<uint32_t>;
    v.failNextKeepAlive = j.at("failNextKeepAlive").get<bool>;
    v.silenceChatWhileInGame = j.at("silenceChatWhileInGame").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolChatDebugResource_HPP
