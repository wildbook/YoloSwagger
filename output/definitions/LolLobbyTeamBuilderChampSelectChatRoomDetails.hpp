#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectChatRoomDetails_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectChatRoomDetails_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderChampSelectChatRoomDetails {
    // 
    std::string chatRoomName;
    // 
    std::string chatRoomPassword;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderChampSelectChatRoomDetails& v) {
    j["chatRoomName"] = v.chatRoomName;
    j["chatRoomPassword"] = v.chatRoomPassword;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderChampSelectChatRoomDetails& v) {
    v.chatRoomName = j.at("chatRoomName").get<std::string>;
    v.chatRoomPassword = j.at("chatRoomPassword").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderChampSelectChatRoomDetails_HPP
