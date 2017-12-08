#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  nlohmann::json_t DeleteLolSimpleDialogMessagesV1MessagesByMessageId (const ClientInfo& info,
    const int64_t_t& messageId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-simple-dialog-messages/v1/messages/"+UrlCode::encode(to_string(messageId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("delete", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
