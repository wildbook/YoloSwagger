#pragma once
#include "../client.hpp"
#include "LolChatGroupResource.hpp"
namespace leagueapi {
  LolChatGroupResource_t GetLolChatV1FriendGroupsById (const ClientInfo& info,
    const uint32_t& id)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-chat/v1/friend-groups/"+UrlCode::encode(to_string(id))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
