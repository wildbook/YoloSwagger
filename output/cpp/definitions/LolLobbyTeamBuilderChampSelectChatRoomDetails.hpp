#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectChatRoomDetails_t {
    std::optional<std::string> chatRoomPassword;
    std::string chatRoomName;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectChatRoomDetails_t& v) {
    if(v.chatRoomPassword)
      j["chatRoomPassword"] = *v.chatRoomPassword;
    j["chatRoomName"] = v.chatRoomName;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectChatRoomDetails_t& v) {
    if(auto it = j.find("chatRoomPassword"); it != j.end() && !it->is_null())
      v.chatRoomPassword = it->get<std::string>();
    v.chatRoomName = j.at("chatRoomName").get<std::string>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderChampSelectChatRoomDetails_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
