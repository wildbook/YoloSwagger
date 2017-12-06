#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectChampSelectChatRoomDetails_t {
    std::string chatRoomName;
    std::optional<std::string> chatRoomPassword;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectChatRoomDetails_t& v) {
    j["chatRoomName"] = v.chatRoomName;
    if(v.chatRoomPassword)
      j["chatRoomPassword"] = *v.chatRoomPassword;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectChatRoomDetails_t& v) {
    v.chatRoomName = j.at("chatRoomName").get<std::string>();
    if(auto it = j.find("chatRoomPassword"); it != j.end() !it->is_null())
      v.chatRoomPassword = it->get<std::string>();
  }
}
