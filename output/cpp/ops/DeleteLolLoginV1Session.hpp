#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void DeleteLolLoginV1Session (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-login/v1/session";
    HttpsClient client(info.host, false);
    auto res = client.request("delete", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
