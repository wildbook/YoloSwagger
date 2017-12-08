#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Quits the application.
  void PostProcessControlV1ProcessQuit (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/process-control/v1/process/quit";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
