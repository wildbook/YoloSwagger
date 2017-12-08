#pragma once
#incldue "../client.hpp"
#include "LolChatFriendRequestResource.hpp"
namespace leagueapi {
  nlohmann::json PutLolChatV1FriendRequestsById (const ClientInfo& info,
    const uint64_t& id,
    const LolChatFriendRequestResource_t& request)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(request).dump();
    const std::string path = "/lol-chat/v1/friend-requests/"+UrlCode::encode(to_string(id))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
