#ifndef SWAGGER_TYPES_LolChampSelectChampSelectChatRoomDetails_HPP
#define SWAGGER_TYPES_LolChampSelectChampSelectChatRoomDetails_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChampSelectChampSelectChatRoomDetails {
    // 
    std::string chatRoomName;
    // 
    std::string chatRoomPassword;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectChatRoomDetails& v) {
    j["chatRoomName"] = v.chatRoomName;
    j["chatRoomPassword"] = v.chatRoomPassword;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectChatRoomDetails& v) {
    v.chatRoomName = j.at("chatRoomName").get<std::string>;
    v.chatRoomPassword = j.at("chatRoomPassword").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectChampSelectChatRoomDetails_HPP
