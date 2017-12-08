#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatDebugResource_t {
    std::optional<bool> isXMPPLoggingEnabled;
    std::optional<bool> enableChatFiltering;
    std::optional<uint32_t> maxReconnectInterval;
    std::optional<uint32_t> keepAliveInterval;
    std::optional<bool> triggerChatDisconnect;
    std::optional<uint32_t> asyncWaitInterval;
    std::optional<uint32_t> minReconnectInterval;
    std::optional<bool> failAllChatLogin;
    std::optional<bool> silenceChatWhileInGame;
    std::optional<bool> failNextKeepAlive;
    std::optional<bool> failNextChatLogin;
    std::optional<bool> failNextChatLogout;
  };

  inline void to_json(nlohmann::json& j, const LolChatDebugResource_t& v) {
    if(v.isXMPPLoggingEnabled)
      j["isXMPPLoggingEnabled"] = *v.isXMPPLoggingEnabled;
    if(v.enableChatFiltering)
      j["enableChatFiltering"] = *v.enableChatFiltering;
    if(v.maxReconnectInterval)
      j["maxReconnectInterval"] = *v.maxReconnectInterval;
    if(v.keepAliveInterval)
      j["keepAliveInterval"] = *v.keepAliveInterval;
    if(v.triggerChatDisconnect)
      j["triggerChatDisconnect"] = *v.triggerChatDisconnect;
    if(v.asyncWaitInterval)
      j["asyncWaitInterval"] = *v.asyncWaitInterval;
    if(v.minReconnectInterval)
      j["minReconnectInterval"] = *v.minReconnectInterval;
    if(v.failAllChatLogin)
      j["failAllChatLogin"] = *v.failAllChatLogin;
    if(v.silenceChatWhileInGame)
      j["silenceChatWhileInGame"] = *v.silenceChatWhileInGame;
    if(v.failNextKeepAlive)
      j["failNextKeepAlive"] = *v.failNextKeepAlive;
    if(v.failNextChatLogin)
      j["failNextChatLogin"] = *v.failNextChatLogin;
    if(v.failNextChatLogout)
      j["failNextChatLogout"] = *v.failNextChatLogout;
  }

  inline void from_json(const nlohmann::json& j, LolChatDebugResource_t& v) {
    if(auto it = j.find("isXMPPLoggingEnabled"); it != j.end() && !it->is_null())
      v.isXMPPLoggingEnabled = it->get<bool>();
    if(auto it = j.find("enableChatFiltering"); it != j.end() && !it->is_null())
      v.enableChatFiltering = it->get<bool>();
    if(auto it = j.find("maxReconnectInterval"); it != j.end() && !it->is_null())
      v.maxReconnectInterval = it->get<uint32_t>();
    if(auto it = j.find("keepAliveInterval"); it != j.end() && !it->is_null())
      v.keepAliveInterval = it->get<uint32_t>();
    if(auto it = j.find("triggerChatDisconnect"); it != j.end() && !it->is_null())
      v.triggerChatDisconnect = it->get<bool>();
    if(auto it = j.find("asyncWaitInterval"); it != j.end() && !it->is_null())
      v.asyncWaitInterval = it->get<uint32_t>();
    if(auto it = j.find("minReconnectInterval"); it != j.end() && !it->is_null())
      v.minReconnectInterval = it->get<uint32_t>();
    if(auto it = j.find("failAllChatLogin"); it != j.end() && !it->is_null())
      v.failAllChatLogin = it->get<bool>();
    if(auto it = j.find("silenceChatWhileInGame"); it != j.end() && !it->is_null())
      v.silenceChatWhileInGame = it->get<bool>();
    if(auto it = j.find("failNextKeepAlive"); it != j.end() && !it->is_null())
      v.failNextKeepAlive = it->get<bool>();
    if(auto it = j.find("failNextChatLogin"); it != j.end() && !it->is_null())
      v.failNextChatLogin = it->get<bool>();
    if(auto it = j.find("failNextChatLogout"); it != j.end() && !it->is_null())
      v.failNextChatLogout = it->get<bool>();
  }
  inline std::string to_string(const LolChatDebugResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
