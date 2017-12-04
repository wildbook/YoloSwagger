#ifndef SWAGGER_TYPES_LolChatDebugResource_HPP
#define SWAGGER_TYPES_LolChatDebugResource_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolChatDebugResource {
'    // 
    uint32_t asyncWaitInterval;
    // 
    bool enableChatFiltering;
    // 
    bool failAllChatLogin;
    // 
    bool failNextChatLogin;
    // 
    bool failNextChatLogout;
    // 
    bool failNextKeepAlive;
    // 
    bool isXMPPLoggingEnabled;
    // 
    uint32_t keepAliveInterval;
    // 
    uint32_t maxReconnectInterval;
    // 
    uint32_t minReconnectInterval;
    // 
    bool silenceChatWhileInGame;
    // 
    bool triggerChatDisconnect;
  };

  void to_json(nlohmann::json& j, const LolChatDebugResource& v) {
    j["asyncWaitInterval"] = v.asyncWaitInterval;
    j["enableChatFiltering"] = v.enableChatFiltering;
    j["failAllChatLogin"] = v.failAllChatLogin;
    j["failNextChatLogin"] = v.failNextChatLogin;
    j["failNextChatLogout"] = v.failNextChatLogout;
    j["failNextKeepAlive"] = v.failNextKeepAlive;
    j["isXMPPLoggingEnabled"] = v.isXMPPLoggingEnabled;
    j["keepAliveInterval"] = v.keepAliveInterval;
    j["maxReconnectInterval"] = v.maxReconnectInterval;
    j["minReconnectInterval"] = v.minReconnectInterval;
    j["silenceChatWhileInGame"] = v.silenceChatWhileInGame;
    j["triggerChatDisconnect"] = v.triggerChatDisconnect;
  }

  void from_json(const nlohmann::json& j, LolChatDebugResource& v) {
    v.asyncWaitInterval = j.at("asyncWaitInterval").get<uint32_t>;
    v.enableChatFiltering = j.at("enableChatFiltering").get<bool>;
    v.failAllChatLogin = j.at("failAllChatLogin").get<bool>;
    v.failNextChatLogin = j.at("failNextChatLogin").get<bool>;
    v.failNextChatLogout = j.at("failNextChatLogout").get<bool>;
    v.failNextKeepAlive = j.at("failNextKeepAlive").get<bool>;
    v.isXMPPLoggingEnabled = j.at("isXMPPLoggingEnabled").get<bool>;
    v.keepAliveInterval = j.at("keepAliveInterval").get<uint32_t>;
    v.maxReconnectInterval = j.at("maxReconnectInterval").get<uint32_t>;
    v.minReconnectInterval = j.at("minReconnectInterval").get<uint32_t>;
    v.silenceChatWhileInGame = j.at("silenceChatWhileInGame").get<bool>;
    v.triggerChatDisconnect = j.at("triggerChatDisconnect").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolChatDebugResource_HPP
