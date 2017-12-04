#ifndef SWAGGER_TYPES_LolPerksChampSelectChatRoomDetails_HPP
#define SWAGGER_TYPES_LolPerksChampSelectChatRoomDetails_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksChampSelectChatRoomDetails {
    // 
    std::string chatRoomPassword;
    // 
    std::string chatRoomName;
  };

  inline void to_json(nlohmann::json& j, const LolPerksChampSelectChatRoomDetails& v) {
    j["chatRoomPassword"] = v.chatRoomPassword;
    j["chatRoomName"] = v.chatRoomName;
  }

  inline void from_json(const nlohmann::json& j, LolPerksChampSelectChatRoomDetails& v) {
    v.chatRoomPassword = j.at("chatRoomPassword").get<std::string>;
    v.chatRoomName = j.at("chatRoomName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPerksChampSelectChatRoomDetails_HPP
