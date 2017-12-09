#pragma once
#include "../client.hpp"
#include "LolSimpleDialogMessagesLocalMessageRequest.hpp"
namespace leagueapi {
  nlohmann::json PostLolSimpleDialogMessagesV1Messages (const ClientInfo& info,
    const LolSimpleDialogMessagesLocalMessageRequest_t& messageRequest)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(messageRequest).dump();
    std::string path = "/lol-simple-dialog-messages/v1/messages";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
