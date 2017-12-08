#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksChampSelectChatRoomDetails_t {
    std::optional<std::string_t> chatRoomPassword;
    std::string_t chatRoomName;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectChatRoomDetails_t& v) {
    if(v.chatRoomPassword)
      j["chatRoomPassword"] = *v.chatRoomPassword;
    j["chatRoomName"] = v.chatRoomName;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectChatRoomDetails_t& v) {
    if(auto it = j.find("chatRoomPassword"); it != j.end() && !it->is_null())
      v.chatRoomPassword = it->get<std::string_t>();
    v.chatRoomName = j.at("chatRoomName").get<std::string_t>();
  }
  inline std::string to_string(const LolPerksChampSelectChatRoomDetails_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
