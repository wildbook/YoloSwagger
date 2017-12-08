#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostLolGameClientChatV1PartyMessages (const ClientInfo& info,
    const std::string_t& message)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/lol-game-client-chat/v1/party-messages?message=" + UrlCode::encode(to_string(message));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
