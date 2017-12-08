#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostLolGameflowV1PreEndGameTransition (const ClientInfo& info,
    const bool_t& enabled)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/lol-gameflow/v1/pre-end-game-transition?enabled=" + UrlCode::encode(to_string(enabled));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
